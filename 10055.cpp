#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll a,b;
    while(scanf("%lld%lld",&a,&b)==2)
    {
        if(a>b)
            cout<<a-b<<endl;
        else cout<<b-a<<endl;
    }
    return 0;
}


