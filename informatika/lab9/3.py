from math import sqrt

n, coord_arr = int(input('Количество сокровищ: ')), []
min_dis, number_in_arr = 10 ** 10, 0

print('Координаты сокровищ')
for i in range(n):
    coord_arr.append([int(i) for i in input().split()])

coord_sasha = [int(i) for i in input('Координаты Александра: ').split()]

for i in range(n):
    dis = sqrt((coord_sasha[0] - coord_arr[i][0])** 2 + (coord_sasha[1] - coord_arr[i][1]) ** 2)
    if min_dis < dis:
        min_dis = dis
        number_in_arr = i

print(*coord_arr[number_in_arr])