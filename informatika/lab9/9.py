from random import shuffle


def print_playing_area(playing_area):
    for i in playing_area:
        for j in i:
            print('{:2s}'.format(j), end='')
        print()

def game():
    playing_area = ['. . . .'.split() for i in range(4)]
    variants = [[i, j] for i in range(4) for j in range(4)]
    shuffle(variants)
    ships, bomb = [variants[i] for i in range(4)], variants[5]
    print(f'Координаты кораблей: {ships}', f'Координаты бомбы:{bomb}', sep='\n')
    n = 0

    while 1:
        n += 1
        print_playing_area(playing_area)
        while 1:
            game_move = list(map(int, input('Введите ваш ход чрез пробел: ').split()))
            if len(game_move) == 2: break
            else: print('Вы ввели координаты не верно, попробуйте снова')
        if [game_move[0], game_move[1]] not in variants:
            print('Упссс, вы сюда уже стреляли(((')
        elif game_move in ships:
            print('Урааа, попадание!!!')
            playing_area[game_move[0]][game_move[1]] = 'X'
            variants.remove([game_move[0], game_move[1]])
            ships.remove([game_move[0], game_move[1]])
        elif game_move == bomb:
            print('Вы попали в бомбу и проиграли(((')
            break
        else:
            print('Упс, промах')
            variants.remove([game_move[0], game_move[1]])
        if len(ships) == 0:
            print(f'Поздравляю! Вы победили, сделав {n} хода!' if n == 4 else f'Поздравляю! Вы победили, сделав {n} ходов!')
            break
 
    if input('Хотите сыграть снова? да/нет ').lower() == 'да': game()
    else: print('Ну ладно, приходите поиграть ещё когда захотите)')

game()