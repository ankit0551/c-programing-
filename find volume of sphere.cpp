#include<stdio.h>
int main()
{
      float r,volume;
     printf("Enter Radius\n");
     scanf("%f",&r);
     volume = (4/3.0)*3.14*r*r*r;
     printf("\nVolume of Sphere = %f",volume);
     return 0;
}
