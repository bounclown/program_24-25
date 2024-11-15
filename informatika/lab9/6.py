n = int(input('Введите размер матрицы: '))
matrix = []

print('Начните заполнять матрицу по строчно через пробел')
for i in range(n):
    matrix.append(list(map(int, input().split())))

for i in range(n):
    for j in range(n):
        if i == j:
            l = matrix[i][j]
            matrix[i][j] = matrix[n - i - 1][j]
            matrix[n - i - 1][j] = l

print('Нова матрица:')
for i in range(n):
    for j in range(n):
        print(matrix[i][j], end=' ')
    print()
