a = list(map(int,input().split()))
b = []

for i in range(1, len(a)):
    if a[i] > a[i-1]:
        b.append(a[i])

print(*b)

#1 5 2 4 3