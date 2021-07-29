#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,ans;
    while(cin>>n>>k)
    {
        int res=n;
        while(n>=k)
        {
            ans=n/k;
            res=res+ans;
            n=ans+n%k;
        }
        cout<<res<<endl;
    }
    return 0;
}



