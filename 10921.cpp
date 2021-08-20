#include<bits/stdc++.h>
using namespace std;

int main()
{
    char arr[50];
    int i,j;
    while(cin>>arr)
    {
        int len=strlen(arr);
        for(i=0;i<len;i++)
        {
            if(arr[i]=='A'||arr[i]=='B'||arr[i]=='C')
                cout<<"2";
            else if(arr[i]=='D'||arr[i]=='E'||arr[i]=='F')
                cout<<"3";
            else if(arr[i]=='G'||arr[i]=='H'||arr[i]=='I')
                cout<<"4";
            else if(arr[i]=='J'||arr[i]=='K'||arr[i]=='L')
                cout<<"5";
            else if(arr[i]=='M'||arr[i]=='N'||arr[i]=='O')
                cout<<"6";
            else if(arr[i]=='P'||arr[i]=='Q'||arr[i]=='R'||arr[i]=='S')
                cout<<"7";
            else if(arr[i]=='T'||arr[i]=='U'||arr[i]=='V')
                cout<<"8";
            else if(arr[i]=='W'||arr[i]=='X'||arr[i]=='Y'||arr[i]=='Z')
                cout<<"9";
            else cout<<arr[i];
        }
        cout<<endl;
    }
}
