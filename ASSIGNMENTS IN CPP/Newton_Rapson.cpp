#include <iostream>
#include <math.h>
using namespace std;

float func(double x)
{
    double z = (pow(x, 3) - x - 1);
    return z;
}

double diffun(double x)
{
    double z = ((3 * x*x )- 1);
    return z;
}
int main()
{
    double x1, tol,x2,dif,k;
    int count=1;
    cout<<"Enter a guess root \n";
    cin>>x1;
    cout<<"Enter tolerance \n";
    cin>>tol;

    x2=x1-((func(x1))/diffun(x1));
     
    do
    {
        k=x2;
        x2=x2-((func(x2))/diffun(x2));
        dif= abs(k-x2);
         
        count++;
        


    }
     while (dif>tol);
cout<<"The approx root is ";
cout<<x2<<endl;
cout<<"The process is executed in "<<count<<" steps";
return 0;


    
}