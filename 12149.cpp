#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,res=0;
    while(cin>>n)
    {
        res=0;
        if(n==0)
            return 0;
        for(int i=n;i>=1;i--)
            res+= (i*i);

        cout<<res<<endl;
    }
}
