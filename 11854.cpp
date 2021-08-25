#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long Tm;
   int arr[100];
   while(cin>>arr[0]>>arr[1]>>arr[2])
   {
       if(arr[0]==0 && arr[1]==0 && arr[2]==0)
        return 0;
       sort(arr,arr+3);

       Tm=(arr[0]*arr[0])+(arr[1]*arr[1]);
       if(Tm==(arr[2]*arr[2]))
        cout<<"right"<<endl;
       else cout<<"wrong"<<endl;
   }
}

