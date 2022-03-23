#include<stdio.h>
int a,b,n;
double f(double x)
{
    return (1/(x));
}
double getabs(double x)
{
    if(x<0)
    return (x*-1);
    else
    return x;
}
int main()
{
    double area;
    printf("Enter lower and Upper limit: ");
    scanf("%d%d",&a,&b);
    
    printf("Enter the value of n: ");
    scanf("%d",&n);
    
    double h = getabs(((double)b-(double)a)/(double)n);
     //printf("Area is : %f\n",area);
    
    area = f(a)+f(b);
    //printf("Area is : %f\n",area);
    
    double x= (double)a+h;
    for(int i=1; i<n;i++)
    {
       
        area = area+ 2*f(x);
         //printf("x=%f  f(x) is=%f Area is : %f\n",x,f(x),area);
        x=x+h;
    }
    area = (area*h)/2;
    printf("Area is : %f\n",area);
    
}
