#include<stdio.h>

int main() {
 int basicSal, hAllow, dAllow, gross;

 printf("Enter Rajesh\'s basic salary: \n");
 scanf("%d", &basicSal);
 hAllow = 0.2 * basicSal;
 dAllow = 0.4 * basicSal;
 gross = basicSal + hAllow + dAllow;

 printf("Rajesh\'s gross salary after adding house and dearness allowance is %d", gross);


return 0;
}