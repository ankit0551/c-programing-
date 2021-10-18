#include<stdio.h>
int main()
{
    int x,y;
    printf("enter the two angles of triangle\n");
    scanf("%d %d",&x,&y);
    printf("third angle= %d", 180-(x+y));
    return 0;
}