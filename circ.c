#include<stdio.h>
#define PI 3.14
int main() {

float r, area, circ;
printf("Enter Radius of The Cirlce\n");
scanf("%f", &r);
area = PI*r*r;
circ = 2*PI*r;

printf("The area of the circle is %.2f and its circumference is %.2f\n", area, circ);


return 0;
}