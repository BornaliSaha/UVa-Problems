#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int sum,mod,div,i,res;
        if(n==2)
        {
            cout<<"00"<<endl<<"01"<<endl;
            for(i=11;i<=99;i++)
            {
                mod=i%10;
                div=i/10;
                sum=(mod+div)*(mod+div);
                if(sum==i)
                    cout<<i<<endl;
            }
        }
        else if(n==4)
        {
            cout<<"0000"<<endl<<"0001"<<endl;
            for(i=1111;i<=9999;i++)
            {
                mod=i%100;
                div=i/100;
                sum=(mod+div)*(mod+div);
                if(sum==i)
                    cout<<i<<endl;
            }
        }
        else if(n==6)
        {
            cout<<"000000"<<endl<<"000001"<<endl;
            for(i=10001;i<=99999;i++)
            {
                mod=i%1000;
                div=i/1000;
                sum=(mod+div)*(mod+div);
                if(sum==i)
                    cout<<"0"<<i<<endl;
            }

            for(i=100000;i<=999999;i++)
            {
                mod=i%1000;
                div=i/1000;
                sum=(mod+div)*(mod+div);
                if(sum==i)
                    cout<<i<<endl;
            }
        }
        else
        {
            cout<<"00000000"<<endl<<"00000001"<<endl;
            for(i=1000001;i<=9999999;i++)
            {
                mod=i%10000;
                div=i/10000;
                sum=(mod+div)*(mod+div);
                if(sum==i)
                    cout<<"0"<<i<<endl;
            }
            for(i=10000000;i<=99999999;i++)
            {
                mod=i%10000;
                div=i/10000;
                sum=(mod+div)*(mod+div);
                if(sum==i)
                    cout<<i<<endl;
            }
        }
    }
    return 0;
}
