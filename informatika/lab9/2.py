from random import shuffle

arr, numbers = [], list(range(1, 11))

while 1:
    shuffle(numbers)
    n = 0
    for i in range(3):
        n1, n2, n3 = numbers[n], numbers[n+1], numbers[n+2]
        arr.append([n1, n2, n3])
        n += 3
    if sum(arr[0]) == sum(arr[1]) == sum(arr[2]) == arr[0][0] + arr[1][1] + arr[2][2] == arr[0][2] + arr[1][1] + arr[2][0] == 15:
        break
    else:
        arr = []

for i in range(3):
    for j in range(3):
        print(arr[i][j], end=' ')
    print()