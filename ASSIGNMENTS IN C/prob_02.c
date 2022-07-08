# include <stdio.h>

int main()
{
    int i,n,c;
    c=0;
    float x1,x2,fx1,fx2,xm,fxm,c1,c2,fc1,fc2;
    printf("Enter the lower limit \n");
    scanf("%f",&x1);
    printf("Enter the upper limit \n");
    scanf("%f",&x2);
    printf("Enter the number of iterations \n");
    scanf("%d",&n);
    fx1=x1*x1-25;
    fx2=x2*x2-25;
    if(fx1<fx2)
        {
            c1=x1;
            c2=x2;
        }
    else
        {
            c2=x1;
            c1=x2;
        }
    fc1=c1*c1-25;
    fc2=c2*c2-25;
    xm=((c2*fc1)-(c1*fc2))/(fc1-fc2);
    fxm=xm*xm-25;
    if((fc1*fxm)<0)
        c2=xm;
    else
        c1=xm;
    for(i=1;i<=n;i=i+1)
        {
            c=c+1;
            fc1=c1*c1-25;
            fc2=c2*c2-25;
            xm=((c2*fc1)-(c1*fc2))/(fc1-fc2);
            fxm=xm*xm-25;
            if((fc1*fxm)<0)
            c2=xm;
            else
            c1=xm;
        }
    printf("The root of the equation as per Regula Falsi Method is=%f\n",xm);
    printf("The root resulted after %dth iteration",c);
    return 0;
}