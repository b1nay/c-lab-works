#include<stdio.h>

int main() {

int days;
float year;

printf("Enter number of days\n");
scanf("%d", &days);

year = days / 365;

printf("%d years = %.f years\n", days, year);

return 0;
}