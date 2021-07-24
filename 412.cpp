#include<bits/stdc++.h>
using namespace std;

int gcd(int x, int y)
{
    if(x%y==0)
        return y;
    return gcd(y, x%y);
}

int main()
{
    int N, arr[100],i;
    while(cin>>N)
    {
        int ct=0,pr=0,x;
        double pi=0;
        if(N==0)
            break;
        for(i=0;i<N;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<N;i++)
        {
            for(int j=i+1;j<N;j++)
            {
                if(gcd(arr[i],arr[j])==1)
                    ct++;
            }
        }
        if(ct==0)
            cout<<"No estimate for this data set."<<endl;
        else
        {
            pr= (N*(N-1))/2;
            pi= sqrt(((double)6*pr)/ct);
            printf("%.6lf\n",pi);
        }
    }

    return 0;
}
