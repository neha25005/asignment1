#include <stdio.h>
int main()
{
    char ch;
    printf("enter a character:\n");
    scanf("%c", &ch);
    printf(" the ASCII value of %c is %d \n", ch,(int)ch);
    return 0;
}