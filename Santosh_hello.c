#include<stdio.h>
int main()
{
int i=0,j=0;
 while(i<2)
  {
    i++;
    l1:i<2;
     while(j<3)
     {
       printf("loop\n");
       goto l1;
      }
   }
return 0;
}
