#include <iostream>
using namespace std;

int main()
{
 int n;
 cin >> n;
 int a[n];
 for(int i=0;i<n;i++)
   cin >> a[i];
 int sum;
 float avg;
 for(int i=0;i<n;i++)
   sum += a[i];
 avg = sum / n;
 for(int i=0;i<n;i++)
 if(a[i] > avg)
 cout << a[i]<<" ";
 cout<<endl;
return 0;
}
