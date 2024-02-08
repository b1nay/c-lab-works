#include<stdio.h>

int main() {

int a,b,c,sum,avg;

printf("Enter 3 numbers\n");
scanf("%d%d%d", &a,&b,&c);

sum = a+b+c;
avg = sum/3;

printf("The sum and average of the input numbers %d, %d, %d are:\n Sum:\t %d\n Avg:\t %d\n", a,b,c, sum, avg);


return 0;
}