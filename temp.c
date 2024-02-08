#include<stdio.h>

int main() {

float centi, fahr;

printf("Enter temperature in centigrade\n");
scanf("%f", &centi);
fahr = (centi * 9/5)+32;
printf("%.2f degree celcius equals to %.2f fahrenheit\n", centi, fahr);


return 0;
}