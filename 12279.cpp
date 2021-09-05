#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n,x,j=1;
    while(cin>>n)
    {
        int sum=0;
       if(n==0)break;
       for(int i=1;i<=n;i++)
       {
           cin>>x;
           if(x==0) sum-=1;
           else sum+=1;
       }
       printf("Case %d: %d\n",j,sum);
       j++;
    }

}
