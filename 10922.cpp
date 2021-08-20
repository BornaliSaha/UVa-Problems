#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[1005];
    while(gets(s))
    {
        int i=0,j=0,sum=0,deg=1,ans;
        j=strlen(s);

        if(s[i]=='0'&&j==1)
            return 0;

        for(i=0;i<j;i++)
        {
            sum=sum+s[i]-'0';
        }
        ans=sum;
        if(sum%9==0)
        {
            while(sum>9)
            {
                deg++;
                sum=0;
                while(ans)
                {
                    sum=sum+ans%10;
                    ans=ans/10;
                }
            ans=sum;
            }
            cout<<s<<" is a multiple of 9 and has 9-degree "<<deg<<"."<<endl;
        }
        else cout<<s<<" is not a multiple of 9."<<endl;
    }

return 0;

}
