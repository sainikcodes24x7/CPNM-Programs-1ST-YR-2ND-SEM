# include<stdio.h>

#define f(x,y) (y*y-x*x)/(y*y+x*x)

int main()
{
    float x0, y0, xn, h, yn, k1, k2, k3, k4, k;
    int i, n;
    printf("Enter the initial value of x\n");
    scanf("%f",&x0);
    printf("Enter the initial value of y\n");
    scanf("%f",&y0);
    printf("Enter the calculation point\n");
    scanf("%f",&xn);
    printf("Enter the number of iterations\n");
    scanf("%d",&n);
    h = (xn-x0)/n;
    printf("\n x0\ty0\tyn\n");
    printf("------------------\n");
    for(i=0; i < n; i++)
 {
  k1 = h * (f(x0, y0));
  k2 = h * (f((x0+h/2), (y0+k1/2)));
  k3 = h * (f((x0+h/2), (y0+k2/2)));
  k4 = h * (f((x0+h), (y0+k3)));
  k = (k1+2*k2+2*k3+k4)/6;
  yn = y0 + k;
  printf("%f\t%f\t%f\n",x0,y0,yn);
  x0 = x0+h;
  y0 = yn;
 }
 printf("\nValue of y at x =%f is %f",xn,yn);
    return 0;
}