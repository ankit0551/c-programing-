#include<stdio.h>
int main()
{
    char a[100];
    int i,j=0,count=0,k=0;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        count++;
    }
    for(k=0;k<26;k++)
    {
        for(i=0;i<count;i++)
        {
            if(a[i]==65+k || a[i]==97+k )
            {
                j++;
                break;
            }
        }
    }
    if(j==26)
    {
        printf("This sentence is pangram.\n");
    }
    else
    printf("This sentence is not pangram.");

    return 0;
}