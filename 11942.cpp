#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cout<<"Lumberjacks:"<<endl;
    while(n--)
    {
        int arr[15],temp;
        for(int i=0;i<10;i++)
        {
            cin>>arr[i];
        }
        if(arr[0]>arr[1])
        {
            temp=0;
            for(int i=0;i<9;i++)
            {
                if(arr[i]<arr[i+1])
                {
                    temp=1;
                    break;
                }
            }
            if(temp==1)
                cout<<"Unordered"<<endl;
            else cout<<"Ordered"<<endl;
        }
        else
        {
            temp=0;
            for(int i=0;i<9;i++)
            {
                if(arr[i]>arr[i+1])
                {
                    temp=1;
                    break;
                }
            }
            if(temp==1)
                cout<<"Unordered"<<endl;
            else cout<<"Ordered"<<endl;
        }
    }
    return 0;
}
