#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter first numbers : ");
    scanf("%d", &a);
    printf("enter second numbers : ");
    scanf("%d", &b);
    printf("enter third numbers : ");
    scanf("%d", &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("a Is Greatest %d", a);
        }
        else
        {
            printf("%d C IS Greaterst NUmber ", c);
        }
    }
    else
    {
        if (b > c)
        {
            printf("%d b Is Greatest number", b);
        }
        else
        {
            printf("%d C is Greatest Number ", c);
        }
    }

    return 0;
}