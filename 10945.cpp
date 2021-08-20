#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch[100],ch1[100];
    while(gets(ch))
    {
        if(ch[0]=='D'&&ch[1]=='O'&&ch[2]=='N'&&ch[3]=='E')
            return 0;

        int len=strlen(ch),j=0,ck=0;
        for(int i=0;i<len;i++)
        {
            if(ch[i]>='A'&&ch[i]<='Z')
            {
                ch1[j]=tolower(ch[i]);
                j++;
            }
            else if(ch[i]>='a'&&ch[i]<='z')
            {
                ch1[j]=ch[i];
                j++;
            }
        }
        ch1[j]='\0';
        j=j-1;
        for(int i=0;i<=j/2;i++)
        {
            if(ch1[i]!=ch1[j])
            {
                ck=1;
                break;
            }
            j--;
        }
        if(ck==0)
            cout<<"You won't be eaten!"<<endl;
        else cout<<"Uh oh.."<<endl;
    }

    return 0;
}

