#include<stdio.h>
#include<ctype.h>
int main()
{
   char unit;
   double temp;
   printf("wheater temperature in (F) or (C)");
   scanf("%c",&unit);
   unit = toupper(unit);

 if(unit == 'F')
   {
     printf("Enter the temperature in F :\n" );
     scanf("%lf",&temp);
     temp=(temp-32)*9/5;
     printf("The temperature in C is %lf",temp);

    }
 else if(unit =='C')
   {
     printf("Enter the temperature in C :\n" );
     scanf("%lf",&temp);
     temp=9/5*temp+32;
     printf("The temperature in F is %lf",temp);
   }
 else{
     printf("invalid");
    }
    return 0;

}