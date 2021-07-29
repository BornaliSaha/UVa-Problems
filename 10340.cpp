#include<bits/stdc++.h>
using namespace std;

int main()
{
    string ch1,ch2;
    while(cin>>ch1>>ch2)
    {
        int temp=0;
        int len1=ch1.length();
        int len2= ch2.length();

            for(int i=0;i<len2;i++)
            {
                if(temp<len1)
                {
                    if(ch2[i]==ch1[temp])
                    {
                        temp++;
                    }

                }
            }
            if(temp==len1)
                cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
    }
    return 0;
}
