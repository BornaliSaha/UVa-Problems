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
            if(i==0||i%2==0)
                sum=sum+s[i]-'0';
            else sum=sum+(-1)*(s[i]-'0');
        }
        if(sum<0)
            sum=sum*(-1);

        if(sum%11==0)
            cout<<s<<" is a multiple of 11."<<endl;
        else cout<<s<<" is not a multiple of 11."<<endl;
    }

return 0;

}
