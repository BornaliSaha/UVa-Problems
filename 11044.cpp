#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,m,ans;
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>n>>m;
        ans=(n/3)*(m/3);
        cout<<ans<<endl;
    }

    return 0;
}
