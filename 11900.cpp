#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t,n,p,q,arr[50];
   cin>>t;
   for(int i=1;i<=t;i++)
   {
       int ck=0;
       cin>>n>>p>>q;
       for(int j=0;j<n;j++)
       {
           cin>>arr[j];
           if(arr[j]<=q)
           {
               q=q-arr[j];
               ck++;
               //cout<<"q and ck "<<q<<" "<<ck<<endl;
           }
       }
        if(p>=ck)
            cout<<"Case "<<i<<": "<<ck<<endl;
        else cout<<"Case "<<i<<": "<<p<<endl;
   }
}

