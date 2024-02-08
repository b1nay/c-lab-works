//first and last of 3 digits

//sum of digitwise

#include<stdio.h>

int main() {

int num, a,b, sum;

printf("Enter a 3-digit number\n");
scanf("%d", &num);
a = num / 100;

b = num%10;
sum = a + b ;
printf("The sum of first and last digit of entered number %d is %d\n ", num, sum);

return 0;
}