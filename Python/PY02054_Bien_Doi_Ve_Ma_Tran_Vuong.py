n, m = map(int, input().split())
matrix = []
for _ in range(n):
    matrix.append(list(map(int, input().split())))

result_matrix = []

if n > m:
    rows_to_remove = n - m
    removed_count = 0
    for i in range(n):
        is_odd_row = (i + 1) % 2 != 0

        if is_odd_row and removed_count < rows_to_remove:
            removed_count += 1
            continue
        else:
            result_matrix.append(matrix[i])

elif m > n:
    cols_to_remove = m - n

    cols_to_keep_indices = []
    removed_count = 0
    for j in range(m):
        is_even_col = (j + 1) % 2 == 0

        if is_even_col and removed_count < cols_to_remove:
            removed_count += 1
            continue
        else:
            cols_to_keep_indices.append(j)

    for i in range(n):
        new_row = []
        for j_keep in cols_to_keep_indices:
            new_row.append(matrix[i][j_keep])
        result_matrix.append(new_row)

else:
    result_matrix = matrix

for row in result_matrix:
    print(*row)