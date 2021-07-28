#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1,str2;
    int fre1[1004],fre2[1004];
    int i;
    while(getline(cin,str1),getline(cin,str2))
    {
        int len1=str1.size();
        int len2=str2.size();

        for(i='a';i<='z';i++)
        {
            fre1[i]=fre2[i]=0;
        }

        for(i=0;i<len1;i++)
        {
            fre1[str1[i]]++;
        }
        for(i=0;i<len2;i++)
        {
            fre2[str2[i]]++;
        }


        for(i='a';i<='z';i++)
        {
            while(fre1[i]>0 && fre2[i]>0)
            {
                cout<<(char)i;
                fre1[i]--;
                fre2[i]--;
            }
        }
        cout<<endl;
    }

}
