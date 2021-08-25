#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t,arr[20],j=1;
    char ch[105][105];
    cin>>t;
    while(t--)
    {
        int Mx=0;
        for(int i=0;i<10;i++)
        {
            cin>>ch[i]>>arr[i];
            if(arr[i]>Mx)
                Mx=arr[i];
        }
        cout<<"Case #"<<j++<<":"<<endl;
        for(int i=0;i<10;i++)
        {
            if(arr[i]==Mx)
                cout<<ch[i]<<endl;
        }
    }

}

