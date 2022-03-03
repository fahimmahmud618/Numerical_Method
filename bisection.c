#include <stdio.h>
#include <math.h>

double calcy(double x)
{
  return (x*x*x)+(4*x*x)-10;
}

double retabs(float x)
{
    if(x<0)
        x=x*-1;
        
    return x;
}
int main() {
  double flag=0; 
  double x,c;
  double y;

  double a=1;
  double b=2;

  for(;;)
    {
      c=(a+b)/2;
      //cout<<"value of c "<<abs(calcy(c))<<endl;
      if(retabs(calcy(c))<=1e-9)
      {
        break;
      }
      else if(calcy(a)*calcy(c)<0)
      {
        b=c;
      }
      else
      {
        a=c;
      }
    }
  printf("%.9f",c);

}
