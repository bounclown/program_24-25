a = list(map(int,input().split()))
s = sum(a) / len(a)
b, m = [], []

for i in a:
    if i > s:
        b.append(i)
    elif i < s:
        m.append(i)

print(s)
print(*m)
print(*b)

#1 3 5 7 2 8