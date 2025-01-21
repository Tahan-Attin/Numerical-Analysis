#include<stdio.h>
void inter(int n)
{
    float x[20],y[20][20];
    printf("Enter the values of x and y:\n");
    for(int i=0;i<n;i++)
    {
        printf("x[%d] = ",i);
        scanf("%f",&x[i]);
        printf("y[%d] = ",i);
        scanf("%f",&y[i][0]);
    }
    for(int i=1;i<n;i++)
    {
        for(int j=n-1;j>=i;j--)
        {
            y[j][i]=y[j][i-1]-y[j-1][i-1];
        }
    }
    printf("\nBACKWARD DIFFERENCE TABLE\n\n");
    for(int i=0;i<n;i++)
    {
        printf("%0.2f",x[i]);
        for(int j=0;j<=i;j++)
        {
            printf("\t%0.2f",y[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int n;
    printf("Enter the size of the table: ");
    scanf("%d",&n);
    inter(n);
    return 0;
}

