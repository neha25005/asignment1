#include <stdio.h> 
#include <math.h>  

int main() {
    double positive_number;
    double negative_number ;
    printf("enter a positive integer:\n");
    scanf("%f",&positive_number);
    printf("enter a negative integer:\n");
    scanf("%f",&negative_number);
    printf("For the positive number %.2f:\n", positive_number);
    printf("Floor: %f\n", floor(positive_number));
    printf("Ceiling: %f\n", ceil(positive_number));
    printf("\n"); 
    printf("For the negative number %.2f:\n", negative_number);
    printf("Floor: %f\n", floor(negative_number));
    printf("Ceiling: %f\n", ceil(negative_number));

    return 0;
}