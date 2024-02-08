//sum of digiwise for 4 numbers

#include<stdio.h>

int main() {

int num, a,b,c,d, sum;

printf("Enter a 4-digit number\n");
scanf("%d", &num);
a = num / 1000;
b = (num/100)%10;
c = (num/10)%10;
d = num%10;
sum = a + b + c + d;
printf("The sum of each digit of entered number %d is %d\n", num, sum);

return 0;
}