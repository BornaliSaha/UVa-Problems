#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,m,n;
    cin>>t;
    while(t--)
    {
        int arr[2000],j=0,i;
        float avg=0,res=0,sum=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            sum=sum+arr[i];
        }
      
        avg=(float)(sum/n);
        for(i=0;i<n;i++)
        {
            if(arr[i]>avg)
                j++;
        }

        res=(float)(100*j)/n;
        printf("%.3f",res);
        cout<<"%"<<endl;
    }

    return 0;
}
