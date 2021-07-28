#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y;
    while(cin>>n)
    {
        if(n==0)
            return 0;

        int root= ceil(sqrt(n));
        int temp= root*root - root +1;
        x=y=root;

        if(root%2==0)
        {
            if(n>temp)
                y =y-n+temp;
            else x =x-temp+n;
        }
        else
        {
             if(n>temp)
                x =x-n+temp;
            else y =y-temp+n;
        }
        cout<<x<<" "<<y<<endl;
    }

    return 0;
}
