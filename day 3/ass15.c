#include <stdio.h>
#include <math.h> // For sqrt() function

int main()
 {
    double a, b, c, discriminant, root1, root2;

    printf("Enter coefficients a, b, and c for the equation ax^2 + bx + c = 0:\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = (b * b) - (4 * a * c);


    if (discriminant >= 0) 
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

       
        printf("Positive roots are: ");
        if (root1 > 0) 
        {
            printf("%.2lf ", root1);
        }
        if (root2 > 0)
        {
            printf("%.2lf ", root2);
        }
        if (root1 <= 0 && root2 <= 0) {
            printf("None");
        }
        printf("\n");

    } else
     {
        
        printf("The equation has no real roots, and therefore no positive roots.\n");
    }

    return 0;
}