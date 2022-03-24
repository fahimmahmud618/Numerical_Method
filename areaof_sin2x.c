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
    return (2*getabs(sin(x)));
}

int main()
{
    double area;
    //printf("Enter lower and Upper limit: ");
    //scanf("%d%d",&a,&b);
    a=0;
    b=2*(M_PI);
    
    printf("Enter the value of n: ");
    scanf("%lf",&n);
    
    double h = getabs(((double)b-(double)a)/(double)n);
     //printf("Area is : %f\n",area);
    
    area = f(a)+f(b);
    //printf("Area is : %f\n",area);
    
    double x= (double)a+h;
    for(int i=1; i<n;i++)
    {
       if(i%2==0)
            area = area+ 2*f(x);
       else
            area = area+ 4*f(x);
         //printf("x=%f  f(x) is=%f Area is : %f\n",x,f(x),area);
        x=x+h;
    }
    area = (area*h)/3;

    printf("\n\nArea is : %.9f\n",area);
    
}
