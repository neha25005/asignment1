#include <stdio.h>

int main() {
    int units, choice;
    double bill = 0;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    printf("\n Menu:\n");
    printf("1. Calculate bill\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            if(units <= 100) {
                bill = units * 5;
            }
            else if(units <= 200) {
                bill = (100 * 5) + (units - 100) * 7;
            }
            else {
                bill = (100 * 5) + (100 * 7) + (units - 200) * 10;
            }
            printf("Electricity Bill = ₹%.2lf\n", bill);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
