#include<bits/stdc++.h>
using namespace std;

int n,m;
int fx[]={-1,-1,0,1,1,1,0,-1};
int fy[]={0,1,1,1,0,-1,-1,-1};

bool test(int x,int y)
{
    return (x>=1&&y>=1&&x<=n&&y<=m);
}

int main()
{
    int ck=0;
    while(cin>>n>>m)
    {
        if(n==0 && m==0) return 0;
        if(ck)cout<<endl;

        char arr[n+1][m+1];
        int mat[n+1][m+1];

        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
                cin>>arr[i][j];
        }

        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(arr[i][j] == '.')
                {
                    int temp=0;
                    for(int k=0;k<8;k++)
                    {
                        int x = fx[k]+i;
                        int y = fy[k]+j;
                        if(test(x,y)&&arr[x][y]=='*')
                            temp++;
                    }
                    mat[i][j]=temp;

                }
                else
                    mat[i][j]=-1;
            }
        }
        cout<<"Field #"<<++ck<<":\n";
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(mat[i][j]==-1)
                    cout<<"*";
                else cout<<mat[i][j];
            }
            if(i!=n)
                cout<<endl;
        }
        cout<<endl;
    }
}
