#include <stdio.h>
#include <math.h>   // for floor() and ceil()

int main() {
    double num;

    printf("Enter a number (positive or negative): ");
    scanf("%lf", &num);

    printf("Floor value of %.2lf = %.2lf\n", num, floor(num));
    printf("Ceiling value of %.2lf = %.2lf\n", num, ceil(num));

    return 0;
}
