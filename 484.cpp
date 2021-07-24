#include<bits/stdc++.h>
using namespace std;

void spectrum()
{
    vector<int>vec;
    map<int,int>mp;

    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(mp.count(n)==0)
        {
            mp[n]=1;
            vec.push_back(n);
        }
        else
            mp[n]+=1;
    }
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" "<<mp[vec[i]]<<endl;
    }
}
int main()
{
    spectrum();
}
