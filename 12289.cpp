#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    char ch[10];
    cin>>t;
    while(t--)
    {
        cin>>ch;
        int ln=strlen(ch);
        if(ln==5)
            cout<<"3"<<endl;
        else
        {
            if((ch[0]=='o'&&ch[2]=='e')||(ch[1]=='n'&&ch[2]=='e')||(ch[0]=='o'&&ch[1]=='n'))
                cout<<"1"<<endl;
            else
                cout<<"2"<<endl;

        }
    }
}
