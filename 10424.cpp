#include<bits/stdc++.h>
using namespace std;

int alpha(int len, string s)
{
    int sum=0;
    for(int i=0;i<len;i++)
        {
            if(s[i]>=97&&s[i]<=122)
            {
                sum=sum+(s[i]-96);
            }
            else if(s[i]>=65&&s[i]<=90)
            {
                sum=sum+(s[i]-64);
            }
        }
    return sum;
}

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
    char s1[100],s2[100];
    while(gets(s1))
    {
        //gets(s1);
        gets(s2);
        int len1=0,len2=0,i,sum1=0,sum2=0;
        float avg=0;
        len1=strlen(s1);
        len2=strlen(s2);

        sum1=alpha(len1,s1);
        sum2=alpha(len2,s2);

        int n1=cut(sum1);
        int n2=cut(sum2);

        if(n1==n2)
            cout<<"100.00 %"<<endl;
        else if(n1>n2)
        {
            avg=(float)(100*n2)/n1;
            printf("%.2f",avg);
            cout<<" %"<<endl;
        }
        else
        {
            avg=(float)(100*n1)/n2;
            printf("%.2f",avg);
            cout<<" %"<<endl;
        }
    }
    return 0;
}
