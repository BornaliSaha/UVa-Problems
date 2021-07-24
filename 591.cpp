#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,h,i,j=1;
    while(cin>>n)
    {
        int arr[200],sum=0,Move=0;
        if(n==0)
            return 0;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            sum=sum+arr[i];
        }
        int hight=sum/n;
        for(i=0;i<n;i++)
        {
            if(arr[i]>hight)
            {
                Move= Move+ (arr[i]-hight);
            }
        }
        cout<<"Set #"<<j<<endl<<"The minimum number of moves is "<<Move<<"."<<endl<<endl;
        j++;
    }
    return 0;
}
