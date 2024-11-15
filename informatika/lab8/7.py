a = list(map(int, input()))
k = 0

for i in range(1, len(a), 2):
    k += a[i]
for i in range(0, len(a), 2):
    v = a[i] * 2
    if v > 9: v -= 9
    k += v

if k % 10 == 0:
    print("Корректный номер")
else:
    print("Некорректный номер")

#4276440013361511

#4276440013361512 