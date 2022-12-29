#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter the width"<<endl;
    int w;
    cin >> w;
    for(int i=0;i<w;i++)
    {
        for(int j=w;j>i;j--)
        {
            cout << ' ';
        }
        for(int k=0;k<i+1;k++)
        {
            cout << "# ";
        }
        cout << endl;
    }
    for(int i=0;i<w-1;i++)
    {
        for(int j=0;j<i+2;j++)
        {
            cout << " ";
        }
        for(int k=1;k<w-i;k++)
        {
            cout << "# ";
        }
        cout << endl;
    }
  return 0;
}
