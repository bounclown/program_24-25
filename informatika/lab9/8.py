size = list(map(int, input('Введите размеры матрицы через пробел: ').split()))
matrix = []
for i in range(size[0]):
    matrix.append([1 for j in range(size[1])])

for i in range(size[0]):
    for j in range(size[1]):
        if i != 0 and j != 0:
            matrix[i][j] = matrix[i-1][j] + matrix[i][j-1]

for i in matrix:
    for j in i:
        print('{:6d}'.format(j), end='')
    print()
