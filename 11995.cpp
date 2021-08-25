#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        stack<int>stk;
        queue<int>qu;
        priority_queue<int>prq;
        int st=1,q=1,pq=1;
        while(n--)
        {
            int d,x;
            cin>>d>>x;
            if(d==1)
            {
                stk.push(x);
                qu.push(x);
                prq.push(x);
            }
            else
            {
                if(!stk.empty() && stk.top()==x)
                    stk.pop();
                else st=0;
                if(!qu.empty() && qu.front()==x)
                    qu.pop();
                else q=0;
                if(!prq.empty() && prq.top()==x)
                    prq.pop();
                else pq=0;
            }
        }
        if(st+q+pq==0)
            cout<<"impossible"<<endl;
        else if(st+q+pq >1)
            cout<<"not sure"<<endl;
        else if(st==1)
            cout<<"stack"<<endl;
        else if(q==1)
            cout<<"queue"<<endl;
        else if(pq==1)
            cout<<"priority queue"<<endl;
    }

}

