# include<stdio.h>

int main()
{
    int n,i;
    float sx2=0,sxy=0;
    float sx=0,sy=0,sx3=0,sx4=0,sxy2=0;
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
        sx2=sx2+(x[i]*x[i]);
        sy=sy+y[i];
        sx3=sx3+(x[i]*x[i]*x[i]);
        sxy=sxy+(x[i]*y[i]);
        sx4=sx4+(x[i]*x[i]*x[i]*x[i]);
        sxy2=sxy2+(x[i]*x[i]*y[i]);
    }
    float arr[100][100];
    float a[100];
    float c,sum=0.0;
    int j,k;
    arr[1][1]=(float)n;
    arr[1][2]=sx;
    arr[1][3]=sx2;
    arr[1][4]=sy;
    arr[2][1]=sx;
    arr[2][2]=sx2;
    arr[2][3]=sx3;
    arr[2][4]=sxy;
    arr[3][1]=sx2;
    arr[3][2]=sx3;
    arr[3][3]=sx4;
    arr[3][4]=sxy2;
    for(j=1; j<=3; j++) 
    {
        for(i=1; i<=3; i++)
        {
            if(i>j)
            {
                c=arr[i][j]/arr[j][j];
                for(k=1; k<=4; k++)
                {
                    arr[i][k]=arr[i][k]-c*arr[j][k];
                }
            }
        }
    }
     a[3]=arr[3][4]/arr[3][3];
     for(i=2; i>=1; i--)
    {
        sum=0;
        for(j=i+1; j<=3; j++)
        {
            sum=sum+arr[i][j]*a[j];
        }
        a[i]=(arr[i][4]-sum)/arr[i][i];
    }
    printf("The equation of polynomial as per least square method is:\n");
    printf("y=%f+%fx+%fx^2",a[1],a[2],a[3]);
    return 0;
}