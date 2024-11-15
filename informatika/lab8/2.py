import random

a = []

for _ in range(6):
    a.append(random.randint(1,49))

print(*a)