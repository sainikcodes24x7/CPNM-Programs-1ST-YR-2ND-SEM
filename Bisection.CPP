#include<iostream>
#include<cmath>
using namespace std;
float func(double x)
 {
     double z=(pow(2,x)-3*x);
     return z;
 }
// {
//     double z=(pow(x,2)-25);
//     return z;
// }
int main()
{
    double x1,x2,x0,tol,k,diff,a,b;
    int  count=0;
    cout<<"Enter lower limit \n";
    cin>>a;
    cout<<"Enter upper limit \n";
    cin>>b;
    cout<<"Enter tolerance limit \n";
    cin>>tol;

    if (func(a)<0)
    {
       x0=a;
       x1=b;
    }
    else
    {
        x0=b;
        x1=a;
    }
    x2=(x1 + x0)/2;

   do
   {
      k=x2;
    //   cout<<"k  "<<k<<endl;
    //   cout<<"Func "<<func(a)<<endl;
      if (func(k)<0)
      {
          x0=x2;
      }
      else
      {
          x1=x2;
      }
      cout<<"x0 "<<x0<<"\t\t\t\t\t" ;
      cout<<" x1 "<<x1<<"\t\t\t\t\t" ;
      x2=(x0+x1)/2 ;
      cout<<" x2 "<<x2<<"\t\t\t " ;
      cout<<"Func "<<func(k)<<endl;
       
      count++;
      diff=abs(k-x2);
    //   cout<<"Diff "<<diff<<endl;
      
   } while (diff>tol);
   cout<<"The approx root is "<<x2<<endl;
   cout<<"Process executed in "<<count<<" steps";
   return 0;
    
}