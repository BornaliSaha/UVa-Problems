#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if(a%b==0)
        return b;
    return gcd(b,a%b);
}

int main()
{
    int t;
    char c;
    scanf("%d%c",&t,&c);
    while(t--)
    {
        int arr[105],Tm=0,Mx=0,j=0;
        string s;

        getline(cin,s);
        stringstream ss(s);
        while(ss>>arr[j])
            j++;

        for(int i=0;i<j;i++)
        {
            for(int k=i+1;k<j;k++)
            {
                Tm=gcd(arr[i],arr[k]);
                if(Tm>Mx)
                    Mx=Tm;
            }
        }
        cout<<Mx<<endl;
    }
}

