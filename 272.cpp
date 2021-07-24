#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch[1000];
    int len,ck=0;
    while(gets(ch))
    {
        len=strlen(ch);
        for(int i=0;i<len;i++)
        {
            if(ch[i]=='"'&&ck==0)
            {
                ck=1;
                cout<<"``";
            }

            else if(ch[i]=='"'&&ck==1)
            {
                cout<<"''";
                ck=0;
            }
            else cout<<ch[i];
        }
        cout<<endl;
    }
    return 0;
}
