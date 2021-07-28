#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,sum,i;
    while(scanf("%lld",&n)==1)
    {
        if(n<0)
            return 0;
        sum=1;
        for(i=1;i<=n;i++)
            sum=sum+i;

        printf("%lld\n",sum);
    }
    return 0;
}
