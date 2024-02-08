#include<stdio.h>

int main() {
float p,r, si;
int t;

printf("Enter Principle, Time and Rate\n");
scanf("%f%d%f", &p,&t,&r);
si = (p*t*r)/100;
printf("Simple Interest is: %.2f\n", si);


return 0;
}