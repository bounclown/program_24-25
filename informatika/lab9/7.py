size = list(map(int, input('Введите размеры кинозала через пробел: ').split()))
print('Заполните информацию о занятых местах в кинозале по рядам через пробел: ')
cinema_hall = [list(map(int, input().split())) for i in range(size[0])]
k, n, flag = int(input('Введите количество билетов в заказе: ')), 1, False

for i in cinema_hall:
    count = 0
    for j in i:
        if j == 0:
            count += 1
            if k <= count:
                flag = True
                break
        else: count = 0
    if flag == True:
        print(n)
        break
    n += 1

if flag == False: print(0)