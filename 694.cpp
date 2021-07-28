#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n,L,t=1;
    while(cin>>n>>L)
    {
        ll ck=1;
        ll cn=n;
        if(n<0&&L<0)
            return 0;

        while(n!=1)
        {
            if(n%2==0)
            {
                n=n/2;
            }
            else
            {
                n=n*3+1;
                if(n>L)
                    break;
            }
            ck++;
        }
        cout<<"Case "<<t<<": A = "<<cn<<", limit = "<<L<<", number of terms = "<<ck<<endl;
        t++;
    }
}
