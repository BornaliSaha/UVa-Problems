#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch[]={'q','w','e','r','t','y','u','i','o','p',91,93,
           'a','s','d','f','g','h','j','k','l',59,39,92,
           'z','x','c','v','b','n','m',44,46,47,
           '`','1','2','3','4','5','6','7','8','9','0',45,61};
    char str[2000];
    while(gets(str))
    {
        int len=strlen(str);

        for(int i=0;i<len;i++)
        {
          if(str[i]>='A'&&str[i]<='Z')
            str[i]=str[i]+32;
          if(str[i]==' ')
              cout<<str[i];
            else
            {
                for(int j=1;j<47;j++)
                {
                    if(str[i]==ch[j])
                    {
                        cout<<ch[j-2];
                        break;
                    }
                }
            }
        }
        cout<<endl;
    }
    return 0;

}
