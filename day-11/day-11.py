p = int(input())
q = int(input())
r = int(input())
s,t = input().split()

di = { 3.14*p**2:'Circle',
      q*q:'Square',
      ((3**(1/2))/4)*r**2:'Triangle',
      int(s)*int(t):'Rectangle'
}

li = sorted(di.keys())

for i in range(len(li)-1,-1,-1):
    print(di[li[i]])
