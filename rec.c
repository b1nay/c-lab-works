#include<stdio.h>

int main() {

int l,b,area,peri;

printf("Enter length & breadth of the rectangle\n");
scanf("%d%d", &l, &b);
peri = 2*(l+b);
area = l*b;
printf("The perimenter of the given rectangle is %d and its area is %d\n", peri, area);

return 0;
}