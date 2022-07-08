# include <stdio.h>
# include <math.h>
int main()
{
    float x1,x2,e,z,fz,fx1,fx2,c1,c2,z1;
    int c;
    c=0;
    printf("Enter the lower limit \n");
    scanf("%f",&x1);
    printf("Enter the upper limit \n");
    scanf("%f",&x2);
    printf("Enter the user defined tolerance \n");
    scanf("%f",&e);
    fx1=pow(2,x1)-3*x1;
    fx2=pow(2,x2)-3*x2;
    if(fx1<fx2)
    {
        c1=x1;
        c2=x2;
    }
    else
    {
        c1=x2;
        c2=x1;
    }
    z=(c1+c2)/2;
    fz=pow(2,z)-3*z;
    if((fz*fx1)<0)
    c1=z;
    else
    c2=z;
    while(fabs(c1-c2)>e)
    {
        c=c+1;
        z=(c1+c2)/2;
        fz=pow(2,z)-3*z;
        if((fz*fx1)<0)
        c1=z;
        else
        c2=z;
    }
    z1=(c1+c2)/2;
    printf("The root of the equation as per bisection method is=%f \n",z1);
    printf("The root resulted after %dth iteration",(c+1));
}