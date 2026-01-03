from sys import stdin

class Matrix:
    def __init__(self, matrix):
        self.matrix = matrix

    def multiply(self):
        Mat_T = self.matrix
        res = []
        for row in self.matrix:
            res_row = []
            for col in Mat_T:
                res_row.append(sum(a * b for a, b in zip(row, col)))
            res.append(res_row)
        return res

s = []
for line in stdin:
    num = [int(x) for x in line.split()]
    s.extend(num)
t = int(s[0])
i = 1
for _ in range(t):
    n, m = s[i], s[i + 1]
    i += 2
    matrix = []
    for _ in range(n):
        row = []
        for _ in range(m):
            row.append(s[i])
            i += 1
        matrix.append(row)
    A = Matrix(matrix)
    Res = A.multiply()
    for row in Res:
        print(*row)