#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch[150];
    int n,i,j;

    while(cin>>n)
    {
        if(n==0)
            return 0;
        cin>>ch;
        int len=strlen(ch);
        int ct=0,loop=len/n;

        for(i=1;i<=n;i++)
        {
            int ct=i*loop-1,cnt=loop;
            while(cnt)
            {
                cout<<ch[ct];
                ct--;
                cnt--;
            }
        }
        cout<<endl;
    }
    return 0;
}

