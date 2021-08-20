#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int a,b,sum=0;
        cin>>a>>b;
        for(int j=a;j<=b;j++)
        {
            if(j&1)
                sum+=j;
        }
        printf("Case %d: %d\n",i,sum);
    }
}
