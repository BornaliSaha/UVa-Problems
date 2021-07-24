#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch[1000];
    while(gets(ch))
    {
        int i,ct=0;
        if(isupper(ch[0])||islower(ch[0]))
            ct=1;
        int len=strlen(ch);
        for(i=0;i<len;i++)
        {
            if(((ch[i]<'A')||(ch[i]>'z')||(ch[i]>'Z'&&ch[i]<'a'))&&(isupper(ch[i+1])||islower(ch[i+1])))
            {
                ct++;
            }
        }
        cout<<ct<<endl;
    }
    return 0;
}
