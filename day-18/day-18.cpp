#include <iostream>

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int a[27];
    char b[27];
    for(int i=1;i<27;i++)
    {
        a[i]=0;
        b[i]=(char)(i+64);
    }
    for(int i=0;i<s.length();i++)
    {
        if((int)(s[i]-96)<=26 && (int)(s[i]-96)>0)
            a[(int)s[i]-96]+=1;
        else if((int)s[i]-64<=26 && (int)s[i]-64>0)
            a[(int)s[i]-64]+=1;
    }
    int sum=0;
    for(int i=1;i<27;i++)
    {
        sum+=a[i];
    }
    int temp;
    char temp1;
    for(int i=1;i<=26;i++) {
        for(int j=1;j<=26-i;j++) {
            if(a[j]<a[j+1]) {
		    temp = a[j];
		    a[j] = a[j+1];
		    a[j+1] = temp;
		    temp1 = b[j];
		    b[j] = b[j+1];
		    b[j+1] = temp1;
		  }
	    }
	}
	for(int i=1;i<=5;i++) 
	{
	    cout<<b[i]<<": " <<(double)a[i]/sum*100<<"%"<<endl;
	}
    return 0;
}
