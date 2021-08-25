#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    for(;;)
    {
        int ck=0,Tm=0;
        cin>>a>>b;
        if(a==0 && b==0)
            break;
        for(int i=a;i<=b;i++)
        {
            Tm= sqrt(i);
            if((Tm*Tm)==i)
                {
                    ck++;
                    //cout<<i<<endl;
                }
        }
        cout<<ck<<endl;
    }
}

