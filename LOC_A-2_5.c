#include<stdio.h>
int main()
{  
int a1[2][2],sum=0,a2[2][2],p=1,i,j;
    
    printf("Enter the elements of first matrix:\n");
    
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a1[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",a1[i][j]);
        }
        printf("\n");
    }
    printf("Enter the elements of second matrix:\n");
     for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a2[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",a2[i][j]);
        }
        printf("\n");
    }
    printf("Sum :\n");
    for(i =0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            sum=a1[i][j]+a2[i][j];
            printf("%d ",sum);
                       
        }
        printf("\n");
    }
    printf("Product:\n");
    for(i =0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            p=a1[i][j]*a2[i][j];
            printf("%d ",p);
                       
        }
        printf("\n");
    }
    return 0;
}
