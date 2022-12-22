#include <iostream>

using namespace std;

int main()
{
    int m,n;
    cin >> m >> n;
    if(m == 1 || n == 1)
    cout<<"No"<<endl;
    else if(m % 2 == 0 && n%3 ==0 || m%3 == 0 && n % 2 == 0)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
}
