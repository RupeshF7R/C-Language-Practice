#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("Enter The Year : ");
    scanf("%d", &a);
    // a = b;

    if (a % 4 == 0)
    {
        printf("This Is Leap Year");
    }
    // a = a+4;
    else
    {
        printf("this is not leap year");
    }

    return 0;
}