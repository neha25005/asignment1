#include <stdio.h>
int main()
{
     int n,a;
    printf("enter the integer\n");
    scanf("%d",&n);
     a=n%10;
    printf("the last integer:%d\n",a);
    int b=n-(n/10)*10;
    printf("the last integer:%d",b);
    return 0;
}