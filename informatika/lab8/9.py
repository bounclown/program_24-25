a = int(input())
k = 0

for _ in range(a):
    pq = list(map(int, input().split()))
    if (pq[1] - pq[0]) >= 2: k += 1

print(k)