#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll mark[50000000],nprime=0;
ll Prime[50000000];
ll arr[50000000];
ll arrsize;

void sieve(ll n)
{
    ll i,j,limit=sqrt(n)+2;
    mark[1]=1;
    for(i=4;i<=n;i+=2)
        mark[i]=1;
    Prime[nprime++]=2;

    for(i=3;i<=n;i+=2)
    {
        if(!mark[i])
        {
            Prime[nprime++]=i;
            if(i<=limit)
            {
                for(j=i*i;j<=n;j=j+2*i)
                {
                    mark[j]=1;
                }
            }
        }
    }
}

void PrimeFactorize(ll n)
{
    arrsize=0;
    ll sqrN=ll(sqrt(n));

    for(ll i=0;Prime[i]<=sqrN;i++)
    {
        if(n%Prime[i]==0)
        {
            while(n%Prime[i]==0)
            {
                n=n/Prime[i];
                arr[arrsize]=Prime[i];
                arrsize++;
            }
        }
    }
    if(n>1)
    {
        arr[arrsize]=n;
        arrsize++;
    }
}

int main()
{
    ll i,n,cp;
    sieve(50000);
    while(cin>>n)
    {
        cp=n;
        if(n==0)
            return 0;
        if(n>0)
        {
            PrimeFactorize(n);
            cout<<n<<" = ";
            for(i=0;i<arrsize;i++)
            {
                cout<<arr[i];
                if(i<arrsize-1)
                    cout<<" x ";
            }
            cout<<endl;
        }
        else
        {
            n=n*(-1);
            PrimeFactorize(n);
            cout<<cp<<" = -1 x ";
            for(i=0;i<arrsize;i++)
            {
                cout<<arr[i];
                if(i<arrsize-1)
                    cout<<" x ";
            }
            cout<<endl;
        }
    }

    return 0;
}

