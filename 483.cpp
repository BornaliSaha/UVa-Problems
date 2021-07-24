#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch[2000];
    while(gets(ch))
    {
        int len=strlen(ch);
        int tem=0,i;
        for(i=0;i<len;i++)
        {
            if(i==len-1)
            {
                int x=i;
                tem+=1;
                while(tem--)
                {
                    cout<<ch[x];
                    x--;
                }
                tem=0;
            }
            else if(ch[i]!=' ')
            {
                tem++;
            }
            else
            {
                int x=i-1;
                while(tem--)
                {
                    cout<<ch[x];
                    x--;
                }
                cout<<" ";
                tem=0;
            }
        }
        cout<<endl;
    }
    return 0;
}
