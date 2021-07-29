#include<bits/stdc++.h>
using namespace std;
vector<int>vec1;
vector<int>vec2;

void DecToBin1(int D)
{
    while(D)
        {
            if(D%2==0)
            {
                vec1.push_back(0);
                D/=2;
            }
            else
            {
                vec1.push_back(1);
                D/=2;
            }
        }
}
void DecToBin2(int D)
{
    while(D)
        {
            if(D%2==0)
            {
                vec2.push_back(0);
                D/=2;
            }
            else
            {
                vec2.push_back(1);
                D/=2;
            }
        }
}


int main()
{
    int D,i,j,temp,a,b,l1,l2;
    vector<int>ans;
    while(cin>>a>>b)
    {
        int dec=0,c=0;
        DecToBin1(a);
        DecToBin2(b);
        l1=vec1.size();
        l2=vec2.size();

        if(l1>l2)
        {
            while(l2!=l1)
            {
                vec2.push_back(0);
                l2++;
            }
        }
        else {
            while(l2!=l1)
            {
                vec1.push_back(0);
                l1++;
            }
        }

        for(int i=l2-1,j=l2-1;i>=0;i--,j--)
        {
            temp=vec1[i]+vec2[j];
            if(temp>1)
                ans.push_back(0);
            else ans.push_back(temp);
        }
        int len=ans.size();
        for(i=l2-1;i>=0;i--)
        {
            dec=dec+ans[i]*(pow(2,c));
            c++;
        }

        cout<<dec<<endl;

        vec1.clear();
        vec2.clear();
        ans.clear();
    }
}
