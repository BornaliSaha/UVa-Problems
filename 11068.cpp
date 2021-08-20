#include<bits/stdc++.h>
using namespace std;

int main()
{
   int a,b,c,d,e,f;
   double x,y;
    while(scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f)==6)
    {
        if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0)
            return 0;
        if((a*e)-(b*d)==0)
            cout<<"No fixed point exists."<<endl;
        else
        {
            y=(double)((c*d)-(a*f))/((b*d)-(a*e));
            x=(double)(c-(b*y))/a;
            printf("The fixed point is at %.2lf %.2lf.\n",x,y);
        }
    }
    return 0;
}
