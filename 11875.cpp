#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t,n,j=1;
   cin>>t;
   while(t--)
   {
       cin>>n;
       int arr[20];
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
       }
       cout<<"Case "<<j<<": "<<arr[n/2]<<endl;
       j++;
   }
}
