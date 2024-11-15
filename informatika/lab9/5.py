arr = list(map(int, input('Введите размеры матрицы через пробел (высота_ширина): ').split()))
matrix = []

print('Начните заполнять матрицу по строчно через пробел')

for i in range(arr[0]):
    matrix.append(list(map(int, input().split())))
print()
for i in range(arr[1]):
    for j in range(arr[0]):
        print(matrix[j][i], end=' ')
    print()