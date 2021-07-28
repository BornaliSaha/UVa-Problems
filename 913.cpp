#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n,last,sum;
    while(cin>>n)
    {
        last=(n*(n+2))/2;
        sum=(last*3)-6;
        cout<<sum<<endl;
    }
    return 0;
}

