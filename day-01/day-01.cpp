#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    for(int i=a;i<=b;i++) {
        if(i % 3 == 0)
        cout<<"Foo"<<endl;
        else if(i % 2 == 0 && i % 3 != 0)
        cout<<"Bar"<<endl;
        else
        cout<<"Baz"<<endl;
    }
}