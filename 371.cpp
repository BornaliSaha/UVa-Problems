//Bornali Saha
//CSE 19th Batch, Dhaka University of Engineering & Technology 
------------------------------------------------------------------
  
 #include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,x,y,temp,i,j,ct;
    while(cin>>a>>b)
    {
        if(a==0&&b==0)
            return 0;
        if(a>b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        x=a,y=b;
        int H_seq=0,ct=0,index=0;
        for(i=a;i<=b;i++)
        {
            j=i,ct=0;
            if(j==1)
            {
                ct=3;
            }
            while(j!=1)
            {
                if(j%2==0)
                {
                    j=j/2;
                    ct++;
                }
                else
                {
                    j=(3*j)+1;
                    ct++;
                }
            }
            if(ct>H_seq)
            {
                H_seq=ct;
                index=i;
            }
        }
        cout<<"Between "<<x<<" and "<<y<<", "<<index<<" generates the longest sequence of "<<H_seq<<" values."<<endl;
    }

    return 0;
}
