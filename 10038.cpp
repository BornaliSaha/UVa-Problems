#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>vec1;
    vector<int>vec2;
    vector<int>::iterator it;
    int n,x;

    while(cin>>n)
    {
        for(int i=0;i<n;i++)
        {
            cin>>x;
            vec1.push_back(x);
            vec2.push_back(0);
        }
        vec2[0]=1;
        for(int i=0;i<n-1;i++)
        {
            x=abs(vec1[i+1]-vec1[i]);
            if(x>0&&x<n)
                vec2[x]=1;
        }

        it=find(vec2.begin(),vec2.end(),0);

        if(it==vec2.end())
            cout<<"Jolly"<<endl;
        else cout<<"Not jolly"<<endl;

        vec1.clear();
        vec2.clear();

    }


    return 0;
}
