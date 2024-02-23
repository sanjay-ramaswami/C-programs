#include<stdio.h>
int main()
{
double r;
const double PI=3.14159;
printf("Enter the radius : \n");
scanf("%lf",&r);
double circumference=2*PI*r;
printf("circumference = %lf",circumference);
}