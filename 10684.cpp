#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t,arr[100000];
    while(cin>>t)
    {
        if(t==0)break;
        int mx=0,sum=0;
        for(int i=0;i<t;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<t;i++)
        {
            sum+=arr[i];
            if(sum>mx)
                mx=sum;
            if(sum<0)
                sum=0;
        }
        if(mx>0)
            cout<<"The maximum winning streak is "<<mx<<"."<<endl;
        else cout<<"Losing streak."<<endl;
    }
}
