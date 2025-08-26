// swiping values withoit a third variable//
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter two numbers\n");
    scanf("%d %d", &a,&b);
    a=a+b; b=a-b; a=a-b;
    printf("revesed numbers\n");
    printf("%d %d",a,b);
    return 0;
}