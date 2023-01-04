#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin >> n;
    int a[n];
    cin >> m;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int tsum=0,sum=0;
    for(int i=0;i<n-m;i++)
    {
        sum=0;
        for(int j=i;j<i+m;j++)
        {
            sum+=a[j];
        }
        if(sum > tsum)
        {
            tsum = sum;
        }
    }
    cout<<tsum<<endl;
    return 0;
}
