#include<stdio.h>
int main()
{
    char a[100];
    gets(a);
    int i,count;
    for(i=0;a[i]!='\0';i++)
    {
        count++;
    }
    for(i=0;i<count;i++)
    {
        a[i]+=32;
    }
    puts(a);
    return 0;

}
