#include<iostream>
#include<math.h>
using namespace std;

float derivative (double x, double y)
{
   if(y!=0)
    return(y*(pow(x,y-1)));
    else
    return 0;
     
}
 int main()
 { int n;
 double x1,power,sum=0;
cout<<"Enter number of terms \n";
cin>>n;
cout<<"Enter value of x  \n";
    cin>>x1;
for(int i=1;i<=n;i++)
{
    
    cout<<"Enter power of x of "<<i<<" th term \n";
    cin>>power;

    derivative(x1,power);
    cout<<"Do u want to add or subtract ? \n"
    
    sum+=derivative(x1,power);


}
cout<<"Value of derivative of the function is \n";
cout<<sum;
return 0;


 }