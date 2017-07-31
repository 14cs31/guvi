#include<stdio.h>
int main()
{
double number;
printf("Enter the number");
scanf("%lf",&number);
if (number<=0.0)
{
if (number==0.0)
printf("you entered Zero");
else
printf("you entered negative number");
}
else
printf("you entered positive number");
return 0;
}
