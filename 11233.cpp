#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int l,n,ck=0;
    char c1[105][105],ch[50];
    char c2[105][105];
    cin>>l>>n;
    for(int i=0;i<l;i++)
    {
        cin>>c1[i]>>c2[i];
    }
    for(int i=1;i<=n;i++)
    {
        cin>>ch;
        ck=0;
        int ln=strlen(ch);
        for(int j=0;j<l;j++)
        {
            if(strcmp(ch,c1[j])==0)
            {
                cout<<c2[j]<<endl;
                ck=1;
            }
        }
        if(ck==0)
        {
            if(ch[ln-1]=='y'&&(ch[ln-2]=='a'||ch[ln-2]=='e'||ch[ln-2]=='i'||ch[ln-2]=='o'||ch[ln-2]=='u'))
            {
                cout<<ch<<"s"<<endl;
            }
            else if(ch[ln-1]=='y')
            {
                for(int k=0;k<ln-1;k++)
                    cout<<ch[k];
                cout<<"ies"<<endl;
            }
            else if(ch[ln-1]=='o'||ch[ln-1]=='s'||ch[ln-1]=='x')
            {
                cout<<ch<<"es"<<endl;
            }
            else if((ch[ln-1]=='h'&&ch[ln-2]=='c')||(ch[ln-1]=='h'&&ch[ln-2]=='s'))
            {
                cout<<ch<<"es"<<endl;
            }
            else cout<<ch<<"s"<<endl;
        }
    }
}

