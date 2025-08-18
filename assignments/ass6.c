//simple interest//
#include <stdio.h>
int main()
{
    int p,r,t;
    printf("enter the principle, rate of interest and time\n");
    scanf("%d %d %d",&p, &r, &t);
    float si =(p*r*t)/100;
    printf("Required simple interest:%f", si);
    return 0;
}