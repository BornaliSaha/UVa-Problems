#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        n=n*567;
        n=n/9;
        n=n+7492;
        n=n*235;
        n=n/47;
        n=n-498;
        int res=n%100;
        res=res/10;
        if(res<0)
            res=res*(-1);
        cout<<res<<endl;
    }

    return 0;
}

