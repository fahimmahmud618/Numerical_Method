#include <stdio.h>
int n;
int a[100][100];
int b[100];
float x[100][100];
double eps=0.001;
int main()
{
    int i,j,k;
    printf("Enter the dimention of the matrix: ");
    scanf("%d",&n);
    
    printf("Enter the 'A' Matrix: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter the value of a%d%d : ",i,j);
            scanf("%d",&a[i][j]);
            x[i][0]=0;
            printf("\n");
        }
    }
    printf("Enter the 'B' Matrix: \n");
    for(i=0;i<n;i++)
    {
        printf("Enter the value of b%d : ",i);
        scanf("%d",&b[i]);
        printf("\n");
    }
    double mid=0;
    for(int k=1;;k++)
    {
        for(i=0;i<n;i++)
        {
            mid=0;
            for(j=0;j<n;j++)
            {
                if(i!=j)
                {
                    mid = mid + a[i][j]*x[j][k-1];
                }
            }
            mid=b[i]-mid;
        }
        x[i][k]=mid/a[i][i];
        if(x[i][k]-x[i][k-1]<eps)
        break;
    }

    for(i=0;i<n;i++)
    {
        printf("Solution of x%d is %f",i,x[i][k]);
    }
    return 0;
}
