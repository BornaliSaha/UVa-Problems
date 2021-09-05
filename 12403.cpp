#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t,n,sum=0;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        if(s=="donate")
        {
            cin>>n;
            sum+=n;
        }
        else cout<<sum<<endl;
    }
}
