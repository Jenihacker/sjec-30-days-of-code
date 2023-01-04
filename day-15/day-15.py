di = {
    'I':1,
    'V':5,
    'X':10,
    'L':50,
    'C':100,
    'D':500,
    'M':1000
}

sum = 0
s = input()[::-1]+' '
i=0

while i < len(s)-1:
    if s[i+1] == ' ':
        sum+=di[s[i]]
        break
    elif di[s[i]] > di[s[i+1]]:
        sum += di[s[i]] - di[s[i+1]]
        i+=1
    else:
        sum+=di[s[i]]
    i+=1  
        
print(sum)
