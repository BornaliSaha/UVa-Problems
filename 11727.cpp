#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t,arr[100],j=1;
   cin>>t;
   while(t--)
   {
       cin>>arr[0]>>arr[1]>>arr[2];
       sort(arr,arr+3);
       printf("Case %d: %d\n",j,arr[1]);
       j++;
   }
}

