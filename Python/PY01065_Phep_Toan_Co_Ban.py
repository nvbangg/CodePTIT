from itertools import product


def calc(num1, num2, num3, sym):
    if sym == "+":
        return num1 + num2 == num3
    elif sym == "-":
        return num1 - num2 == num3
    return False


def fill_and_check(num1, num2, num3, sym, unknown_positions, digits):
    tmp1, tmp2, tmp3 = list(num1), list(num2), list(num3)
    idx = 0
    for pos in unknown_positions:
        if digits[idx] == "0" and pos[1] == 0:
            return None  # Không cho phép số 0 ở đầu
        if pos[0] == "num1":
            tmp1[pos[1]] = digits[idx]
        elif pos[0] == "num2":
            tmp2[pos[1]] = digits[idx]
        else:
            tmp3[pos[1]] = digits[idx]
        idx += 1
    s1, s2, s3 = "".join(tmp1), "".join(tmp2), "".join(tmp3)
    try:
        i1, i2, i3 = int(s1), int(s2), int(s3)
    except ValueError:
        return None
    if sym == "?":
        for op in ["+", "-"]:
            if calc(i1, i2, i3, op):
                return f"{s1} {op} {s2} = {s3}"
    else:
        if calc(i1, i2, i3, sym):
            return f"{s1} {sym} {s2} = {s3}"
    return None


def solve_expression(s):
    if s[3] in ["*", "/"]:
        return "WRONG PROBLEM!"
    num1, sym, num2, eq, num3 = s[:2], s[3], s[5:7], s[8], s[10:12]

    unknown_positions = []
    for i, ch in enumerate(num1):
        if ch == "?":
            unknown_positions.append(("num1", i))
    for i, ch in enumerate(num2):
        if ch == "?":
            unknown_positions.append(("num2", i))
    for i, ch in enumerate(num3):
        if ch == "?":
            unknown_positions.append(("num3", i))

    if not unknown_positions:
        try:
            i1, i2, i3 = int(num1), int(num2), int(num3)
        except ValueError:
            return "WRONG PROBLEM!"
        if sym == "?":
            for op in ["+", "-"]:
                if calc(i1, i2, i3, op):
                    return f"{num1} {op} {num2} = {num3}"
        elif calc(i1, i2, i3, sym):
            return f"{num1} {sym} {num2} = {num3}"
        return "WRONG PROBLEM!"

    for digits in product("0123456789", repeat=len(unknown_positions)):
        result = fill_and_check(num1, num2, num3, sym, unknown_positions, digits)
        if result:
            return result
    return "WRONG PROBLEM!"


for _ in range(int(input())):
    expression = input().strip()
    result = solve_expression(expression)
    print(result)
