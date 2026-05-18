#include <stdio.h>
#include <math.h>

int main()
{
   int x,y,z;
   printf("Enter a number");
   scanf("%d%d%d",&x, &y, &z);
   
  int num = x*100 +y*10 + z;
   if ((pow(x,3) + pow(y,3) + pow(z,3)) == num)
   printf("Armstrong number");
}