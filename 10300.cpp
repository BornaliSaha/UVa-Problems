#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,t1,sum,a,b,c;
    while(cin>>t)
    {
        while(t--)
        {
            cin>>t1;
             sum=0;
            while(t1--)
            {
                cin>>a>>b>>c;
                sum=sum+(a*c);
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}
