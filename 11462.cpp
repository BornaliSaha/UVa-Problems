#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,c;
   for(;;)
   {
       cin>>n;
       c=n;
       if(n==0)
        break;
       int arr[300]={0},x;
       for(int i=0;i<n;i++)
       {
           cin>>x;
           arr[x]++;
       }
       for(int i=0;i<=100;i++)
       {
           for(int j=0;j<arr[i];j++)
           {
               cout<<i;
               c--;
               if(c>0)
                cout<<" ";
           }
       }
       cout<<endl;
   }
}

