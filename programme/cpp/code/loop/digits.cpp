#include<stdio.h>
int main()
{
int count, number;
count = 0;
printf("Enter a number: ");
scanf("%d",&number);
if(number<0) number = -number;
do{
  number = number/10;
  count ++;
} while (number != 0);

printf("It contains %d digits. \n",count);

return 0;
}
