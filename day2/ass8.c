//celcius to fahrenheit and vice versa//
#include <stdio.h>
int main()
{
    float f1,f2,c1,c2;
    printf("enter temperature in fahrenheit:\n");
    scanf("%f",&f1);
    printf("enter temperature in celcius:\n");
    scanf("%f",&c1);
    c2=(f1-32)*5/9;
    f2=(c1*9/5)+32;
    printf("%f Frahrenheit is %f celcius\n",f1,c2);
    printf("%f celcifus is %f Fahrenheit", c1,f2);
    return 0;
}