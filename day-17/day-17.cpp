#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    char a[n];
    for(int i=0;i<n;i++) 
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(i == n-1)
        {
            cout << a[i] << ' ';
            break;
        }
        else if(a[i] != a[i+1])
        {
            cout << a[i] << ' ';
        }
    }
    return 0;
}
