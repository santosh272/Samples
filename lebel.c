#include<stdio.h>
int main()
{
    float  k=3;
    fun(k=fun(fun(k)));
    printf("%f\n",k);
return 0;
}
int  fun(int i)
{
  i++;
  return i;
}

/*

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
*/
