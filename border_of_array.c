#include<stdio.h>
int main()
{
    int a[3][3],i,j;
    printf("Enter the elements:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The Matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    printf("Border of array:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==0 || j==0 || i==2 || j==2)
            {
                printf("%d ",a[i][j]);
            }
            else
            printf("  ");
        }
        printf("\n");
    }
    return 0;

}