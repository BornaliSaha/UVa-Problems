#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int p,n,mod=0,cp,sum=0;
    while((scanf("%d",&p))==1)
    {
        for(int i=1;i<=p;i++)
        {
            scanf("%d",&n);
            cp=n,sum=0;
            while(n<9 || n>9)
            {
                if(n<=9)
                {
                    sum=n;
                    break;
                }
                while(n!=0)
                {
                    mod=n%10;
                    sum+=(mod * mod);
                    n/=10;
                }
                n=sum;
                sum=0;
            }
            if(sum==1||sum==7)
                printf("Case #%d: %d is a Happy number.\n",i,cp);
            else printf("Case #%d: %d is an Unhappy number.\n",i,cp);
        }
    }
}
