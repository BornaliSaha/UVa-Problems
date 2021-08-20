#include<bits/stdc++.h>
using namespace std;

int main()
{
    int d1,m1,y1,d2,m2,y2,t,temp;
    while(cin>>t)
    {
        for(int i=1;i<=t;i++)
        {
            scanf("%d/%d/%d",&d1,&m1,&y1);
            scanf("%d/%d/%d",&d2,&m2,&y2);
            temp= y1-y2;
            if(m1<m2)
                temp--;
            else if(m1==m2)
            {
                if(d1<d2)
                    temp--;
            }
            if(temp<0)
                printf("Case #%d: Invalid birth date\n",i);
            else if(temp>130)
                printf("Case #%d: Check birth date\n",i);
            else
                printf("Case #%d: %d\n",i,temp);
        }
    }
    return 0;
}
