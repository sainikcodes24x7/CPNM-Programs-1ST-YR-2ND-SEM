# include<stdio.h>

int main()
{
    float l,u;
    int n,i;
    printf("Enter the lower limit of integral\n");
    scanf("%f",&l);
    printf("Enter the upper limit of integral\n");
    scanf("%f",&u);
    printf("Enter the number of sub-intervals for the method\n");
    scanf("%d",&n);
    float s=0,s1;
    float x[(n+1)];
    float y[(n+1)];
    float h=(u-l)/(float)n;
    for(i=0;i<=n;i++)
    {
        x[i]=l+(i*h);
        y[i]=(1/(4*x[i]+5));
    }
    for(i=0;i<=n;i++)
    {
        if(i==0||i==n)
        {
            s=s+y[i];
        }
        else if((i%2)==0)
        {
            s=s+(2*y[i]);
        }
        else
        {
            s=s+(4*y[i]);
        }
    }
    s1=(h/3)*s;
    printf("The integral of the function as per Simpson's one-third Rule in given range is=%f",s1);
    return 0;
}
