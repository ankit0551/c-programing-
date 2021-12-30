#include<stdio.h>
int main()
{
    int alpha=0,digit=0,spl=0,i,k,count=0;
    char a[100];
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        count++;
    }
    for(k=0;k<26;k++)
    {
    for(i=0;i<count;i++)
    {
        if(a[i]==65+k || a[i]==97+k)
        alpha++;
    }
    }
    for(k=0;k<10;k++)
    {
        for(i=0;i<count;i++)
        {
            if(a[i]==48+k)
            {
                digit++;
            }
        }
    }
    for(k=0;k<11;k++)
    {
        for(i=0;i<count;i++)
        {
            if(a[i]==33+k)
            spl++;
        }
    }
    printf("Alphabets = %d\nDigit = %d\nSpecial char = %d",alpha,digit,spl);
    return 0;
}