#include<bits/stdc++.h>
using namespace std;


int main()
{
    int l,w,h;
    double theta;
    while(cin>>l>>w>>h>>theta)
    {
        double theta_radian= theta* (M_PI /180);
        double x= l*(tan(theta_radian));
        if(x<=h)
        {
            double area= 0.5*x*l*w;
            double ans = (l*w*h)- area;
            printf("%.3lf mL\n",ans);
        }
        else
        {
            theta_radian= (90-theta)*(M_PI /180);
            double ans = 0.5*h*h*tan(theta_radian)*w;
            printf("%.3lf mL\n",ans);
        }

    }

    return 0;
}
