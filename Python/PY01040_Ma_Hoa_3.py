for _ in range(int(input())):
    s = input()
    s1, s2 = s[: len(s) >> 1], s[len(s) >> 1 :]

    sum1 = sum(ord(x) - ord("A") for x in s1)
    sum2 = sum(ord(x) - ord("A") for x in s2)

    s1_rotated = [(ord(x) - ord("A") + sum1) % 26 for x in s1]
    s2_rotated = [(ord(x) - ord("A") + sum2) % 26 for x in s2]

    res = "".join(chr((a + b) % 26 + ord("A")) for a, b in zip(s1_rotated, s2_rotated))

    print(res)
