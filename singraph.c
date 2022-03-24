#include<stdio.h>
#include<math.h>
double a,b,n;

double getabs(double x)
{
    if(x<0)
    return (x*-1);
    else
    return x;
}
double f(double x)
{
    return (x*(sin(x)));
}

int main()
{
    double area;
    //printf("Enter lower and Upper limit: ");
    //scanf("%d%d",&a,&b);
    a=0;
    b=4*(M_PI);
    n=1000;
    //printf("Enter the value of n: ");
    //scanf("%lf",&n);
    
    double h = getabs(((double)b-(double)a)/(double)n);
	double x=0;
     //printf("Area is : %f\n",area);
    
    for(int i=1; i<n;i++)
    {
       	printf("%f,%f\n",x,f(x));
        x=x+h;
    }
    //area = (area*h)/3;

    //printf("\n\nArea is : %.9f\n",area);
    
}
