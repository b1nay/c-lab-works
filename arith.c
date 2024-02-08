//prog to perform addition, sub, multiplication, division of two numbers

#include<stdio.h>

int main() {
float a,b, sum, diff, prod, div;

printf("Enter two numbers\n");
scanf("%f%f", &a,&b);

sum = a + b;
diff = a - b;
prod = a * b;
div = a / b;

printf("Result of the arithmetic operations on given numbers %.2f and %.2f \n Sum       : \t %.2f \n Difference:\t %.2f \n Product   :\t %.2f \n Division  :\t% .2f\n", a,b,sum, diff, prod, div);

return 0;
}