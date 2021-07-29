#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int i,ct=0;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        for(i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]>arr[j])
                {
                    ct++;
                }
            }
        }
        cout<<"Minimum exchange operations : "<<ct<<endl;
    }
    return 0;
}


