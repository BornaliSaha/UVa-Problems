#include<bits/stdc++.h>
using namespace std;

int main()
{
    int B1,G1,C1,B2,G2,C2,B3,G3,C3;
    int BGC,BCG,GBC,GCB,CBG,CGB;
    int arr[100];
    while(cin>>B1>>G1>>C1>>B2>>G2>>C2>>B3>>G3>>C3)
    {
        string ch[6]={"BCG","BGC","CBG","CGB","GBC","GCB"};
        arr[0]=G1+C1+B2+G2+B3+C3;
        arr[1]=G1+C1+B2+C2+B3+G3;
        arr[2]=B1+G1+C2+G2+B3+C3;
        arr[3]=B1+G1+B2+C2+G3+C3;
        arr[4]=B1+C1+C2+G2+B3+G3;
        arr[5]=B1+C1+B2+G2+C3+G3;
        int mini=arr[0],ck=0;
        for(int i=0;i<6;i++)
        {
            if(mini>arr[i])
            {
                mini=arr[i];
                ck=i;
            }
        }
        cout<<ch[ck]<<" "<<mini<<endl;
    }
}
