#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,temp,ct;
    vector<int>vec;
    while(cin>>n)
    {
        if(n<0)
            return 0;
        if(n==0)
            cout<<0<<endl;
        else
        {
            vec.clear();
            while(n)
            {
                if(n%3==0)
                {
                    vec.push_back(0);
                    n/=3;
                }
                else
                {
                    ct=n%3;
                    vec.push_back(ct);
                    n/=3;
                }
            }
            int len=vec.size();
            for(i=len-1;i>=0;i--)
                cout<<vec[i];
            cout<<endl;
        }

    }
}

