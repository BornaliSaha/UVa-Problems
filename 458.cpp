#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[2000];
    int i,len;
    while(gets(ch))
    {
        len=strlen(ch);
        for(i=0;i<len;i++)
        {
            cout<<char(ch[i]-7);
        }
        cout<<endl;
    }

}
