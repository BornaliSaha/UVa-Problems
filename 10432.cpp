#include<bits/stdc++.h>
using namespace std;

int main()
{
    double r,n;
    while(scanf("%lf%lf",&r,&n)==2)
    {
        double theta=(double)360/n;
        double theta2=(double)(90-(theta/2));
        ///degree to radian
        double theta_radian= theta2* M_PI /180;

        double height= r*sin(theta_radian);
        double base= 2*r*cos(theta_radian);
        double area = (0.5*height*base)*n;
        printf("%.3lf\n",area);
    }
}
