for _ in range(int(input())):
    p, q = input().split()
    line = input().split() 
    if len(line) == 1: #! input có thể cùng dòng hoặc khác dòng
        x1 = line[0]
        x2 = input()
    else:
        x1, x2 = line
    num1 = int(x1.replace(p, q)) + int(x2.replace(p, q))
    num2 = int(x1.replace(q, p)) + int(x2.replace(q, p))
    print(min(num1, num2), max(num1, num2))
