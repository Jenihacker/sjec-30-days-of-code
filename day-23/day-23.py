n = input()
while n != n[::-1]:
    n = str(int(n)+int(n[::-1]))
    if int(n) > 1000000000000:
        print('NA')
        exit()
print(n)

