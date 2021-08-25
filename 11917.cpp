#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t,j=1;
    cin>>t;
    while(t--)
    {
        int n,day,temp=1,d,arr[500];
        char ch[500][50];
        char c[25];
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>ch[i]>>arr[i];
        }
        scanf("%d%s",&d,c);
        printf("Case %d: ",j++);
        for(int i=0;i<=n;i++)
        {
            //cout<<ch[i]<<endl;
            if(strcmp(c,ch[i])==0)
            {
                if(arr[i]<=d)
                {
                    cout<<"Yesss"<<endl;
                    temp=0;
                }
                else if(arr[i]<=d+5 && arr[i]>d)
                {
                    cout<<"Late"<<endl;
                    temp=0;
                }
            }
        }
        if(temp)
            cout<<"Do your own homework!"<<endl;
    }
}

