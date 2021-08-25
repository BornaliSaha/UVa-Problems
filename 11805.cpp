#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,k,p,res;
    cin>>t;
    for(int j=1;j<=t;j++)
    {
        cin>>n>>k>>p;
        res=(k+p)%n;
        if(res!=0)
            cout<<"Case "<<j<<": "<<res<<endl;
        else cout<<"Case "<<j<<": "<<n<<endl;
    }
}
