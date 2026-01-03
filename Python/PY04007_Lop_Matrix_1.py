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

for _ in range(int(input())):
    n, m = map(int, input().split())
    matrix = [list(map(int, input().split())) for _ in range(n)]
    A = Matrix(matrix)
    Res = A.multiply()
    for row in Res:
        print(*row)
