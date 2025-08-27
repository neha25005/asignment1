#include <stdio.h>
#include <math.h> 

int main() {
    double principal, rate, time, n, amount, compoundInterest;
    printf("Enter the principal amount:\n ");
    scanf("%lf", &principal);

    printf("Enter the annual interest rate (in percentage): \n");
    scanf("%lf", &rate);

    printf("Enter the time (in years): \n");
    scanf("%lf", &time);

    printf("Enter the number of times interest is compounded per year: \n");
    scanf("%lf", &n);
    rate = rate / 100;
    amount = principal * pow((1 + rate / n), n * time);
    compoundInterest = amount - principal;
    printf("\nTotal Amount after %.2lf years: %.2lf\n", time, amount);
    printf("Compound Interest earned: %.2lf\n", compoundInterest);

    return 0;
}