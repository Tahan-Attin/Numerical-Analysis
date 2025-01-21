#include<stdio.h>
#include<math.h>
void inter(int n,float k)
{
    float x[20],y[20][20];
    printf("Enter the values of x:\n");
    for(int i=0;i<n;i++)
    {
        printf("x[%d]= ",i);
        scanf("%f",&x[i]);
        printf("Enter the value of y");
        scanf("%f",&y[i][0]);
    }
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            y[j][i]=y[j+1][i-1]-y[j][i-1];
        }
    }
    printf("\nFORWARD DIFFERENCE TABLE\n\n");
    for(int i=0;i<n;i++)
    {
        printf("%0.2f",x[i]);
        for(int j=0;j<n-i;j++)
        {
            printf("\t%0.2f",y[i][j]);
        }
        printf("\n");
    }
    float p,z;
    p=(k-x[0])/2.0;
    z=y[0][0]+p*y[0][1]+p*(p-1.0)/2.0*y[0][2]+p*(p-1.0)*(p-2.0)/6*y[0][3];
    prinf("\n");
    printf("the valu is = %f",z);
}
int main()
{
    int n;
    float k;
    printf("Enter the size of the table: ");
    scanf("%d", &n);
    printf("enter Which position you want to find");
    scanf("%f",&k);
    inter(n,k);
    return 0;
}


