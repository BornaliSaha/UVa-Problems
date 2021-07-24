#include<bits/stdc++.h>
using namespace std;
char ch[1000];

bool mirror(char ch[])
{
    int len=strlen(ch);
    int j=len-1;
    int ck=0;
    for(int i=0;i<len;i++)
    {

            if((ch[i]=='A'&&ch[j-i]=='A')||(ch[i]=='E'&&ch[j-i]=='3')||
               (ch[i]=='H'&&ch[j-i]=='H')||(ch[i]=='I'&&ch[j-i]=='I')||
               (ch[i]=='J'&&ch[j-i]=='L')||(ch[i]=='L'&&ch[j-i]=='J')||
               (ch[i]=='M'&&ch[j-i]=='M')||(ch[i]=='S'&&ch[j-i]=='2')||
               (ch[i]=='T'&&ch[j-i]=='T')||(ch[i]=='U'&&ch[j-i]=='U')||
               (ch[i]=='V'&&ch[j-i]=='V')||(ch[i]=='W'&&ch[j-i]=='W')||
               (ch[i]=='X'&&ch[j-i]=='X')||(ch[i]=='Y'&&ch[j-i]=='Y')||
               (ch[i]=='Z'&&ch[j-i]=='5')||(ch[i]=='1'&&ch[j-i]=='1')||
               (ch[i]=='2'&&ch[j-i]=='S')||(ch[i]=='3'&&ch[j-i]=='E')||
               (ch[i]=='5'&&ch[j-i]=='Z')||(ch[i]=='8'&&ch[j-i]=='8')||
               (ch[i]=='O'&&ch[j-i]=='O'))
                    ck++;
    }

    if(ck==len)
        return 1;
    return 0;
}

bool palindrome(char ch[])
{
    int len=strlen(ch);
    int j=len-1;
    for(int i=0;i<len/2;i++)
    {
        if(ch[i]!=ch[j])
        {
            return 0;
        }
        j--;
    }
    return 1;
}

int main()
{
    int i,j;
    while(gets(ch))
    {
        int p=palindrome(ch);
        int m=mirror(ch);
        if(p==1&&m==1)
            cout<<ch<<" -- is a mirrored palindrome."<<endl;
        else if(p==1&&m==0)
            cout<<ch<<" -- is a regular palindrome."<<endl;
        else if(p==0&&m==1)
            cout<<ch<<" -- is a mirrored string."<<endl;
        else cout<<ch<<" -- is not a palindrome."<<endl;

    cout<<endl;
    }
}



