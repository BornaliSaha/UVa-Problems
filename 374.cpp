#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll bigmod(ll b, ll p,ll m)
{
    if(p==0)
        return 1;
    ll temp = bigmod(b,p/2,m);
    temp=(temp*temp)%m;

    if(p%2==1)
        temp=(temp*b)%m;
    return temp;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll b,p,m;
    while(cin>>b>>p>>m)
    {
        if(b==0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            ll ans=bigmod(b,p,m);
            cout<<ans<<endl;
        }
    }
    return 0;
}
