#include<stdio.h>
#include<math.h>
int main()
{
  double a,b,c;
  printf("Enter the two sides a and b : \n");
  printf("side ab : \n");
  scanf("%lf",&a);
  printf("side bc :");
  scanf("%lf",&b);
  c=sqrt(pow(a,2)+pow(b,2));
  printf("the length of hypotenuse ac : %lf",c);




    return 0;
}