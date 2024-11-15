menu = [
    ["Пицца Маргарита", ["мука", "томаты", "сыр", "базилик"], 10],
    ["Салат Цезарь", ["салат", "курица", "сыр", "сухарики"], 8],
    ["Суп Томатный", ["томаты", "лук", "морковь", "картофель"], 6]
]

while 1:
    print('1. Отобразить меню ресторана.', '2. Найти блюдо по названию и отобразить его ингредиенты и цену.', 
          '3. Добавить новое блюдо в меню.', '4. Изменить цену блюда.', '5. Выход из программы.', sep='\n')
    print()
    n = int(input())
    if n == 1:
        for i in range(len(menu)):
            print(f'Блюдо: {menu[i][0]} | Цена: {menu[i][2]}')
        print()
    if n == 2:
        while 1:
            s, l = input('Введите название блюда: '), False
            print()
            for i in range(len(menu)):
                if s == menu[i][0]:
                    print('Ингредиенты: ', end='')
                    for j in range(len(menu[i][1])):
                        print(menu[i][1][j], end=' ')
                    print(f'| Цена блюда: {menu[i][2]}')
                    print()
                    l = True
                    break

            if l == False:
                print('Блюдо не найдено(((', 'Попробуйте ещё раз', sep='\n')
                print()
            else: break
    if n == 3:
        name, ingredients, cost, count = '', [], 0, 0
            
        name = input('Введите название блюда: ')
        count = int(input('Введите количество ингердиентов в вашем блюде: '))
        for i in range(count):
            ingredients.append(input(f'Ингредиент {i+1}: '))
        cost = int(input('Введите цену вашего блюда: '))

        menu.append([name, ingredients, cost])
        print()
    if n == 4:
        while 1:
            s, l = input('Введите название блюда у которого хотите изменить цену: '), False
            print()
            for i in range(len(menu)):
                if s == menu[i][0]:
                    print(f'Старая цена = {menu[i][2]}')
                    cost = int(input('Введите новую цену: '))
                    menu[i][2] = cost
                    l = True
                    break
            
            if l == False:
                print('Блюдо не найдено(((', 'Попробуйте ещё раз', sep='\n')
                print()
            else: break
    if n == 5: break