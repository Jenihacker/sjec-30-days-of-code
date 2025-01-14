#include <iostream>
using namespace std;
int collatz(int n);

int main()
{
    int a,b,max=0,maxx=0;;
    cin >> a >> b;
    for(int i=a;i<=b;i++) 
    {
        if(collatz(i)>max)
        {   
            max=collatz(i);
            maxx=i;
        }
    }
    cout<<maxx;
    return 0;
}

int collatz(int n)
{
    int count=0;
    while(n!=1)
    {
        if(n%2==0)
        {
            n/=2;
            count+=1;
        }
        else
        {
            n=3*n+1;
            count+=1;
        }
    }
    return count;
}
