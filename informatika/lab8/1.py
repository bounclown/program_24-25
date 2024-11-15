a = input().split()
digits, alphabet = [], []

for i in a:
    if i.isdigit():
        digits.append(i)
    else:
        alphabet.append(i)

print('Цифры', *digits)
print('Буквы', *alphabet)

#1 a 3 4 b 6
