//Bornali Saha
//CSE 19th Batch, Dhaka University of Engineering & Technology 
------------------------------------------------------------------

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n],ck=0;

        for(i=0;i<n;i++)
            cin>>arr[i];
        for(i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]>arr[j])
                {
                    swap(arr[i],arr[j]);
                    ck++;
                }
            }
        }
        cout<<"Optimal train swapping takes "<<ck<<" swaps."<<endl;
    }
}
