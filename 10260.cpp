#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch[50];
    while(cin>>ch)
    {
        int len=0,i,ans=0;
        len=strlen(ch);
        for(i=0;i<len;i++)
        {
            if(i!=0&&(ch[i]==ch[i-1]))
                continue;
            else if(ch[i]=='B'||ch[i]=='F'||ch[i]=='P'||ch[i]=='V')
            {
                if(i==0)
                    cout<<"1";
                else if(ch[i-1]!='B'&&ch[i-1]!='F'&&ch[i-1]!='P'&&ch[i-1]!='V')
                    cout<<"1";
            }
            else if(ch[i]=='C'||ch[i]=='G'||ch[i]=='J'||ch[i]=='K'||ch[i]=='Q'||ch[i]=='S'||ch[i]=='X'||ch[i]=='Z')
            {
                if(i==0)
                    cout<<"2";
                else if(ch[i-1]!='C'&&ch[i-1]!='G'&&ch[i-1]!='J'&&ch[i-1]!='K'&&ch[i-1]!='Q'&&ch[i-1]!='S'&&ch[i-1]!='X'&&ch[i-1]!='Z')
                    cout<<"2";
            }
            else if(ch[i]=='D'||ch[i]=='T')
            {
                if(i==0)
                    cout<<"3";
                else if(ch[i-1]!='D'&&ch[i-1]!='T')
                    cout<<"3";
            }
            else if(ch[i]=='L')
            {
                if(i==0)
                    cout<<"4";
                else if(ch[i-1]!='L')
                    cout<<"4";
            }
            else if(ch[i]=='M'||ch[i]=='N')
            {
                if(i==0)
                    cout<<"5";
               else if(ch[i-1]!='M'&&ch[i-1]!='N')
                    cout<<"5";
            }
            else if(ch[i]=='R')
            {
                if(i==0)
                    cout<<"6";
               else if(ch[i-1]!='R')
                    cout<<"6";
            }
        }
        cout<<endl;
    }

    return 0;
}
