#include<stdio.h>
int main()
{
  double num1, num2,result;
  char operator;
  printf("Enter the operation +,-,*,/ \n");
  scanf("%c",&operator);
 
  switch(operator)
  {
     case '+':
     
      printf("Enter the two numbers :");
       scanf("%lf",&num1);
       scanf("%lf",&num2);
     result=num1+num2;
     printf("The sum is : %lf",result);
     break;

     
          case '-':
                printf("Enter the two numbers :");
       scanf("%lf",&num1);
       scanf("%lf",&num2);
          
     result=num1-num2;
     printf("The sum is : %lf",result);
     break;
          case '*':
                printf("Enter the two numbers :");
       scanf("%lf",&num1);
       scanf("%lf",&num2);
     result=num1*num2;
     printf("The sum is : %lf",result);
     break;
          case '/':
                printf("Enter the two numbers :");
       scanf("%lf",&num1);
       scanf("%lf",&num2);
     result=num1/num2;
     printf("The sum is : %lf",result);
     break;
      default:
      printf("Invalid input!!! ");

  }


    return 0;
}