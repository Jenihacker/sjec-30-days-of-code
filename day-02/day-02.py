n = int(input())

ct = 1
  
while ct <= n:
    triangle = input().split()
    for i in range(len(triangle)):
        triangle[i]=int(triangle[i])
    if ct % 3 == 1:
        print(min(triangle))
    elif ct % 3 == 2:
        print(sorted(triangle)[1])
    else:
        print(max(triangle))
    ct+=1
    
    
