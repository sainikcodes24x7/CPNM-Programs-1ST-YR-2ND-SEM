#include<stdio.h>
int main()
{
    int i,j,k,n;
    float arr[100][100],c,a[100],sum=0.0;
    printf("\nEnter the order of matrix: ");
    scanf("%d",&n);
    printf("\nEnter the elements of augmented matrix row-wise:\n\n");
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=(n+1); j++)
        {
            printf("A[%d][%d] : ", i,j);
            scanf("%f",&arr[i][j]);
        }
    }
    /* forward elimination*/
    for(j=1; j<=n; j++) 
    {
        for(i=1; i<=n; i++)
        {
            if(i>j)
            {
                c=arr[i][j]/arr[j][j];
                for(k=1; k<=n+1; k++)
                {
                    arr[i][k]=arr[i][k]-c*arr[j][k];
                }
            }
        }
    }
     a[n]=arr[n][n+1]/arr[n][n];
    /* back substitution*/
    for(i=n-1; i>=1; i--)
    {
        sum=0;
        for(j=i+1; j<=n; j++)
        {
            sum=sum+arr[i][j]*a[j];
        }
        a[i]=(arr[i][n+1]-sum)/arr[i][i];
    }
    printf("\nThe solution is: \n");
    for(i=1; i<=n; i++)
    {
        printf("\nx%d=%f\t",i,a[i]); /* solution matrix*/
    }
    return 0;
}