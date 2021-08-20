#include<bits/stdc++.h>
using namespace std;

int main()
{
    int D,i,temp;
    vector<int>vec;
    while(cin>>D)
    {
        int ct=0;
        if(D==0)
            return 0;
        vec.clear();
        while(D)
        {
            if(D%2==0)
            {
                vec.push_back(0);
                D/=2;
            }
            else
            {
                vec.push_back(1);
                ct++;
                D/=2;
            }
        }
        int len=vec.size();
        cout<<"The parity of ";
        for(i=len-1;i>=0;i--)
            cout<<vec[i];
        cout<<" is "<<ct<<" (mod 2)."<<endl;
    }
}
