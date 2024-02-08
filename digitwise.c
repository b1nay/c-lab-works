//sum of digiwise

#include<stdio.h>

int main() {

int num, a,b,c, sum;

printf("Enter a 3-digit number\n");
scanf("%d", &num);
a = num / 100;
b = (num/10)%10;
c = num%10;
sum = a + b + c;
printf("The sum of each digit of entered number %d is %d\n ", num, sum);

return 0;
}