#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll a,b;
    while(scanf("%lld%lld",&a,&b)==2)
    {
        ll carry=0,Cut_a=0,Cut_b=0,ex=0;
        if(a==0&&b==0)
            return 0;
        while(a||b)
        {
            Cut_a=a%10;
            Cut_b=b%10;
            ll sum=Cut_a+Cut_b+ex;
            ex=0;
            if(sum>9)
            {
                carry++;
                ex=1;
            }
            a/=10;
            b/=10;
        }
        if(carry==0)
            cout<<"No carry operation."<<endl;
        else if(carry==1)
            cout<<carry<<" carry operation."<<endl;
        else cout<<carry<<" carry operations."<<endl;

    }
    return 0;
}

