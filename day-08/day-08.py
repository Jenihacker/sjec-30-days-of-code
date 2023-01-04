a = int(input())
b = int(input())

li = []
flag = False

for i in range(a,b):
    flag = False
    if i==1:
        flag=True
    for j in range(2,i//2+1):
        if i % j == 0:
            flag = True
    if not flag:
        li.append(i)
        
for i in range(len(li)-1):
    print(f'{li[i]} - {li[i+1]} : {li[i+1]-li[i]-1}')
