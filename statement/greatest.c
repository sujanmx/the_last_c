#include <stdio.h>

int main()
{
    printf("take possitive three integer input and print gratest of them \n");

    int a, b, c;

    printf("enter the first number: ");

    scanf("%d", &a);

    printf("enter the second number: ");

    scanf("%d", &b);

    printf("enter the third number: ");

    scanf("%d", &c);

    if (a > b && b > c)
    {
        printf("the gratest number: %d", a);
    }

    if (b > a && b > c)
    {
        printf("the gratest number: %d", b);
    }

    else
    {
        printf("the gratest number: %d", c);
    }
}