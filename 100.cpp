#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,i,j,x,y,ct=0,temp,p;
    while(scanf("%lld%lld",&a,&b)==2)
    {
        x=a,y=b,temp=0;
        if(b>a)
        {
            x=b,y=a;
        }
        for(i=y;i<=x;i++)
        {
            p=i,ct=1;
            while(p!=1)
            {
                if(p%2==0)
                {
                    p=p/2;
                    ct++;
                }
                else
                {
                    p=3*p+1;
                    ct++;
                }
            }
           if(ct>temp)
                temp=ct;
        }
        cout<<a<<" "<<b<<" "<<temp<<endl;
    }
}
