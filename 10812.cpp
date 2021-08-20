#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,s,d;
    cin>>t;
    while(t--)
    {
        cin>>s>>d;
        if(d>s)
            cout<<"impossible"<<endl;
        else if((s+d)&1)
            cout<<"impossible"<<endl;
        else
            cout<<(s+d)/2<<" "<<(s-d)/2<<endl;
    }

    return 0;
}
