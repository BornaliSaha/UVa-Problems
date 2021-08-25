#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y,temp,i=1;
    while(cin>>n)
    {
     temp=1,y=0;
        if(n<0)
            return 0;
        else
        {
            if(n==1)
                cout<<"Case "<<i<<": 0"<<endl;
            else
            {
                while(temp<n)
                {
                    temp=temp*2;
                    y++;
                }
                cout<<"Case "<<i<<": "<<y<<endl;
            }
        }
        i++;
    }
    return  0;
}
