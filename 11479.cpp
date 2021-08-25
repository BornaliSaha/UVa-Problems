#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,a,b,c;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>a>>b>>c;
        if((a+b)>c&&(b+c)>a&&(c+a)>b)
        {
            if(a==b&&b==c)
                cout<<"Case "<<i<<": Equilateral"<<endl;
            else if(a!=b&&b!=c&&a!=c)
                cout<<"Case "<<i<<": Scalene"<<endl;
            else cout<<"Case "<<i<<": Isosceles"<<endl;
        }
        else cout<<"Case "<<i<<": Invalid"<<endl;
    }
}
