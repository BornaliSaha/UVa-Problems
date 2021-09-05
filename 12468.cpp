#include<bits/stdc++.h>
using namespace std;

int main()
{
   int a,b;
   while(cin>>a>>b)
   {
       if(a==-1 && b==-1)break;
        int Tm1=0;
        if(a<b)
        {
            Tm1= (100-b)+a;
            cout<<min(Tm1,b-a)<<endl;
        }
        else if(a>b)
        {
            Tm1= (100-a)+b;
            cout<<min(Tm1,a-b)<<endl;
        }
        else cout<<"0"<<endl;
   }
}
