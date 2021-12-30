#include<stdio.h>
int main()
{
    int a[3][3],i,j,k=0;
    printf("Enter the elements of array:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The array is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]==1)
            {
                k++;
            }
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    if(k==9)
    {
        printf("This is identity Matrix.\n");
    }
    else
    {
        printf("This is not a Identity matrix\n");
    }
    return 0;

}