#include <stdio.h>
int main()
{
    int l, b;
    printf("enter the length and breadth of a rectangle\n");
    scanf("%d %d", &l,&b);
    int a=l*b;
    int p=2*(l+b);
    printf("required area:%d\n",a);
    printf("required perimeter:%d",p);
    return 0;
}