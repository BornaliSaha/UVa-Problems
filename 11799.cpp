#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,n,x;
    cin>>t;

    for(i=1;i<=t;i++)
    {
        cin>>n;
        int maxi=0;
        int arr[2000];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
            if(arr[j]>maxi)
                maxi=arr[j];
        }
        cout<<"Case "<<i<<": "<<maxi<<endl;
    }

    return 0;
}

