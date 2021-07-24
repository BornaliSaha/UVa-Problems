#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch[10000];
    while(gets(ch))
    {
        int len=strlen(ch),x,mod=0,i;
        if(ch[0]>='0'&&ch[0]<='9')
        {
            for(i=len-1;i>=0;i--)
            {
                x=x*10+(ch[i]-'0');
                if(x>=32)
                {
                    cout<<(char)(x);
                    x=0;
                }
            }
        }
        else
        {
            for(i=len-1;i>=0;i--)
            {
                x=int(ch[i]);
                while(x)
                {
                    mod=x%10;
                    cout<<mod;
                    x=x/10;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}


