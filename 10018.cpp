#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll Reverse(ll a)
{
    ll mod, rev=0;
    while(a)
    {
        rev=rev*10+a%10;
        a=a/10;
    }
    return rev;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,i=0,j,rev,ct=5;
        cin>>n;

        while(n!=Reverse(n))
        {
            n=n+Reverse(n);
            i++;
        }
        cout<<i<<" "<<n<<endl;
    }
    return 0;
}
