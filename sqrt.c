#include<stdio.h>
#include<math.h>
int main() {
int n;
float sqroot;

printf("Enter a number\n");
scanf("%d", &n);

sqroot = sqrt(n);
printf("The square root of %d is %.3f\n", n, sqroot );

return 0;
}