def func(x):
    return x**2 / (10 + x**3)

a =-2
b = 5
n = 1000
h = (b - a) / n

f = []

i = a
while i < b:
    f.append(func(i))
    i += h

s = 0

for i in range(0, len(f)-1):
    s+=h/2*(f[i]+f[i+1])
    
print(s)
