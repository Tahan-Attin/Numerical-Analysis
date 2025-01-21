#include<stdio.h>
#include<math.h>
void inter(int n)
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
        for(int j=0;j<n - i;j++)
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
}
int main()
{
    int n;
    float k;
    printf("Enter the size of the table: ");
    scanf("%d", &n);
    inter(n);
    return 0;
}
