# include <stdio.h>

int main()
{
    int n,i;
    float sx2=0,sxy=0;
    float sx=0,sy=0;
    float a0,a1;
    printf("Enter the number of points\n");
    scanf("%d",&n);
    float x[n];
    float y[n];
    printf("Enter the x co-ordinates one by one\n");
    for(i=0;i<n;i++)
    {
        scanf("%f",&x[i]);
    }
    printf("Enter the y coordinates one by one\n");
    for(i=0;i<n;i++)
    {
        scanf("%f",&y[i]);
    }
    for(i=0;i<n;i++)
    {
        sx=sx+x[i];
        sy=sy+y[i];
        sx2=sx2+(x[i]*x[i]);
        sxy=sxy+(x[i]*y[i]);
    }
    a0=((sx2*sy)-(sx*sxy))/((n*sx2)-(sx*sx));
    a1=((n*sxy)-(sx*sy))/((n*sx2)-(sx*sx));
    printf("The equation of straight line as per least square method is:\n");
    printf("y=%f+%fx",a0,a1);
    return 0;
}