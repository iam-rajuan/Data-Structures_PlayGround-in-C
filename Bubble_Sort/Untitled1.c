#include <stdio.h>
int main()
{
    int i,j,k,order;
    float
    M[20][20],r,p[100000],sum=0.0;
    printf("\n");
    printf("Enter the order of matrix: ");
    scanf("%d",&order);
    printf("\n");
    printf("Put(row-wise)the elements of augmented matrix:");
    printf("\n");
    for(i=1; i<=order; i++)
    {
        for(j=1; j<=(order+1); j++)
        {
            scanf("%f",&M[i][j]);
        }
    }
    printf("\n");
    printf("Inputed matrix is: \n");
    for(i=1; i<=order; i++)
    {
        for(j=1; j<=order+1; j++)
        {
            printf("%.f",M[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    for(j=1; j<=order; j++)
    {
        for(i=1; i<=order; i++)
        {
            if(i>j)
            {
                r=M[i][j]/M[j][j];
                for(k=1; k<=order+1; k++)
                {
                    M[i][k]=M[i][k]-r*M[j][k];
                }
            }
        }
    }
    p[order]=M[order][order+1]/
             M[order][order];
    for(i=order-1; i>=1; i--)
    {
        sum=0.0;
        for(j=i+1; j<=order; j++)
        {
            sum=sum+M[i][j]*p[j];
        }
        p[i]=(M[i][order+1]-
              sum)/M[i][i];
    }
    printf("\n");
    printf("\nThe solution is: \n");
    printf("\n a0 = %f ",p[1]);
    printf("\n a1 = %f",p[2]);
    printf("\n a2 = %f ",p[3]);
    printf("\n a3 = %f",p[4]);
    return 0;
}
