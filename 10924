#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while(cin>>s)
    {
        int len,i,j,n=0,ck=0;
        len=s.length();
        for(i=0;i<len;i++)
        {
            if(s[i]>=65&&s[i]<=90)
                n=n+(s[i]-38);
            else n=n+(s[i]-96);
        }
        if(n==2)
            cout<<"It is a prime word."<<endl;
        else if(n%2==0)
        {
            cout<<"It is not a prime word."<<endl;
        }
        else
        {
            int temp=sqrt(n)+2;
            for(i=3;i<=temp;i++)
            {
                if(n%i==0&&n!=i)
                {
                    ck=1;
                    break;
                }
            }
            if(ck)
                cout<<"It is not a prime word."<<endl;
            else cout<<"It is a prime word."<<endl;
        }
    }
    return 0;
}
