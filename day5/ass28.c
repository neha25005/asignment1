#include <stdio.h>

int main() {
    int choice;
    double basic, hra, ta, da, gross;

    printf("Enter Basic Salary: ");
    scanf("%lf", &basic);

    printf("\nMenu:\n");
    printf("1. Calculate HRA (20%% of Basic)\n");
    printf("2. Calculate TA (10%% of Basic)\n");
    printf("3. Calculate DA (5%% of Basic)\n");
    printf("4. Calculate Gross Salary\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            hra = 0.20 * basic;
            printf("HRA = %.2lf\n", hra);
            break;
        case 2:
            ta = 0.10 * basic;
            printf("TA = %.2lf\n", ta);
            break;
        case 3:
            da = 0.05 * basic;
            printf("DA = %.2lf\n", da);
            break;
        case 4:
            hra = 0.20 * basic;
            ta = 0.10 * basic;
            da = 0.05 * basic;
            gross = basic + hra + ta + da;
            printf("Gross Salary = %.2lf\n", gross);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}