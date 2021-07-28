#include<bits/stdc++.h>
using namespace std;


int isPrime(int n)
{
    int len=sqrt(n)+2;
    for(int i=2;i<=len;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int rev(int n)
{
    int res=0;
    while(n)
    {
        res= res*10 + n%10;
        n=n/10;
    }
    return res;
}

int main()
{
    int n;
    while(cin>>n)
    {
        int x=isPrime(n);
        if(x==1)
        {
            int reve=rev(n);
            int y=isPrime(reve);
            if(n==reve)
                cout<<n<<" is prime."<<endl;
            else if(y==1)
                cout<<n<<" is emirp."<<endl;
            else cout<<n<<" is prime."<<endl;
        }
        else cout<<n<<" is not prime."<<endl;

    }


    return 0;
}
