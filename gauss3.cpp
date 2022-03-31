
#include <iostream>
using namespace std;

double x0=0, y0=0, z0=0, xn=0, yn=0, zn=0;
double getabs(double x)
{
    if(x<0)
    return (x*-1);
    else
    return x;
}

double retmaxoldNew()
{
    double xd= getabs(xn-x0), yd=getabs(yn-y0), zd = getabs(zn-z0);
    
    if((xd>=yd)&&(xd>=zd))
        return xd;
    else if((zd>=yd)&&(zd>=yd))
        return zd;
    else
        return yd;
    
}
int main()
{
    double eps = 1e-9;
    int n=0;
    
        xn = ((85-((3*y0 - 2*z0)))/15);
        yn = ((51-((2*x0 + z0)))/10);
        zn = ((5-((x0 - 2*y0)))/8);
        
    while(1)
    {
        n++;
        x0 = xn;
        y0 = yn;
        z0 = zn;
        
        xn = ((85-((3*yn - 2*zn)))/15);
        yn = ((51-((2*xn + zn)))/10);
        zn = ((5-((xn - 2*yn)))/8);
        
        //printf("%f  %f  %f\n",xn,yn,zn);
        
        if(retmaxoldNew()<=eps)
        break;
        
    }

    printf("No of iteration: %d\n\n%f  %f  %f",n,xn,yn,zn);
    return 0;
}
