#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n,p,t,res=0;
    while(scanf("%lf%lf",&n,&p)==2)
    {
        t=1/n;
        res=pow(p,t);
        printf("%.lf\n",res);
    }
}
