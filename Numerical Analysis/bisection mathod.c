#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define F(x) (x*x-7)
void bisection(float a,float b)
{
    int i=0;
    float xr,xr_old=0.0,tol=0.05;
    float z=0;
    if(F(a)*F(b)>=0)
    {
        printf("Invalid interval [a, b]. The function must have different signs at a and b.\n");
        return;
    }
    printf("\nIter\t a\t b\t xr\t F(xr)\t   F(a)\t    F(b)  error \n");
    printf("-------------------------------------------------------------\n");
    do
    {
        xr_old=xr;
        xr=(a + b)/2;
        float f=F(xr);
        float x=F(a);
        float y=F(b);
        z=fabs((xr-xr_old)/xr);
        printf("%d\t%.5f\t%.5f\t%.5f\t%.5f  %.5f  %.5f  %.5f\n",i,a,b,xr,f,x,y,z);
        if (F(xr)==0.0)
        {
            break;
        }
        else if(F(a)*F(xr)<0)
        {
            b=xr;
        }
        else
        {
            a=xr;
        }
        i++;
    }
    while(z>=tol);
    printf("\nRoot is approximately = %.4f\n", xr);
}
int main()
{
    float a, b;
    printf("Enter the value of interval [a, b]: ");
    scanf("%f %f", &a, &b);
    bisection(a, b);
    return 0;
}

