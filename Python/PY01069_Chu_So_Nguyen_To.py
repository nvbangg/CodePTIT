from itertools import product

def is_valid(s):
    digits = set(s)
    required = {'2', '3', '5', '7'}
    return required.issubset(digits) and s[-1] != '2'

def solve(N):
    digits = ['2', '3', '5', '7']
    result = []

    for length in range(4, N + 1):
        for p in product(digits, repeat=length):
            num = ''.join(p)
            if is_valid(num):
                result.append(int(num))

    result.sort()
    for num in result:
        print(num)

N = int(input())
solve(N)
