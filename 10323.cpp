#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll fact(ll n)
{
    if(n==0)
        return 1;
    else
        return (n*fact(n-1));
}

int main()
{
    ll n,res;

    while(cin>>n)
    {
        res=0;
        if(n>13)
            cout<<"Overflow!"<<endl;
        else if(n<0)
        {
            n=n*(-1);
            if(n%2==0)
                cout<<"Underflow!"<<endl;
            else cout<<"Overflow!"<<endl;
        }
        else if(n<8)
            cout<<"Underflow!"<<endl;
        else
        {
            res=fact(n);
            cout<<res<<endl;
        }
    }
    return 0;
}



