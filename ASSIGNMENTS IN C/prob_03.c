# include <stdio.h>

int main()
{
    float x1,x2;
    int n;
    printf("Enter the lower limit \n");
    scanf("%f",&x1);
    printf("Enter the upper limit \n");
    scanf("%f",&x2);
    printf("Enter the number of iterations \n");
    scanf("%d",&n);
    float x0;
    int i,c=0;
    x0=(x1+x2)/2;
    for(i=1;i<=n;i++)
    {
        c++;
        x0=x0-((x0*x0*x0-5*x0+1)/(3*x0*x0-5));
    }
    printf("The root of the equation as per Regula Falsi Method is=%f\n",x0);
    printf("The root resulted after %dth iteration",c);
    return 0;
}