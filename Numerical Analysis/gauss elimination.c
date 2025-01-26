#include <stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter the size of the matrix: ");
    scanf("%d",&n);
    float a[n][n+1];
    float x[n];
    printf("Enter the elements of the augmented matrix row by row:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n+1;j++)
        {
            scanf("%f",&a[i][j]);
        }
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            float factor=a[j][i]/a[i][i];
            for(k=i;k<n+1;k++)
            {
                a[j][k]=a[j][k]-factor*a[i][k];
            }
        }
    }
    for(i=n-1;i>=0;i--)
    {
        x[i]=a[i][n];
        for(j=i+1;j<n;j++)
        {
            x[i]=x[i]-a[i][j]*x[j];
        }
        x[i]/=a[i][i];
    }
    printf("The solution is:\n");
    for(i=0;i<n;i++)
    {
        printf("x[%d] = %f\n",i+1,x[i]);
    }
    return 0;
}


