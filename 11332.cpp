#include<bits/stdc++.h>
using namespace std;

int cut(int n)
{
    while(n>9)
    {
        int sum=0;
        while(n)
        {
            sum=sum+n%10;
            n/=10;
        }
        n=sum;
    }
    return n;
}

int main()
{
    long long n;
    while(cin>>n)
    {
        int res=0;
        if(n==0)
            return 0;
        else
        {
            res=cut(n);
        }
        cout<<res<<endl;
    }

    return 0;
}
