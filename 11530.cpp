#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,j,i;
    char c;
    scanf("%d%c",&t,&c);
    for(j=1;j<=t;j++)
    {
        char ch[150];
        gets(ch);
        int sum=0,len=strlen(ch);

        for(i=0;i<len;i++)
        {
            if(ch[i]==' ')
                sum+=1;
            else if(ch[i]=='a'||ch[i]=='d'||ch[i]=='g'||ch[i]=='j'||ch[i]=='m'||ch[i]=='p'||ch[i]=='t'||ch[i]=='w')
                sum+=1;
            else if(ch[i]=='b'||ch[i]=='e'||ch[i]=='h'||ch[i]=='k'||ch[i]=='n'||ch[i]=='q'||ch[i]=='u'||ch[i]=='x')
                sum+=2;
            else if(ch[i]=='c'||ch[i]=='f'||ch[i]=='i'||ch[i]=='l'||ch[i]=='o'||ch[i]=='r'||ch[i]=='v'||ch[i]=='y')
                sum+=3;
            else if(ch[i]=='s'||ch[i]=='z')
                sum+=4;
            //cout<<ch[i]<<" "<<sum<<endl;

        }
        cout<<"Case #"<<j<<": "<<sum<<endl;
    }
}
