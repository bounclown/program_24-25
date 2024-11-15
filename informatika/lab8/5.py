x = int(input())
a = list(map(int, input().split()))
k = 1

for i in a:
    if x > i:
        print(k)
        break
    k += 1
else:
    print(k)

#176
#215 207 196 176 168 166

#176
#215 210 207
