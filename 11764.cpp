#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
    int t,j=1;
    cin>>t;
    while(t--)
    {
        int n,Hi=0,Lw=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=1;i<n;i++)
        {
            if(arr[i]>arr[i-1])
                Hi++;
            if(arr[i]<arr[i-1])
                Lw++;
        }
        printf("Case %d: %d %d\n",j++,Hi,Lw);
    }
}
