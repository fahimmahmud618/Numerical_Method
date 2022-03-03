#include <bits/stdc++.h>

using namespace std;
double calcy(double x)
{
  return (x*x*x)+(4*x*x)-10;
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
      if(abs(calcy(c))<=1e-9)
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
  cout<<fixed<<setprecision(9)<<c;

}
