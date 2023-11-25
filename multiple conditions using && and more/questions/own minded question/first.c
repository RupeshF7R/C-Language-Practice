#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("enter first numbers : ");
    scanf("%d", &a);
    printf("enter second numbers : ");
    scanf("%d", &b);
    printf("enter third numbers : ");
    scanf("%d", &c);
    printf("enter fourth numbers : ");
    scanf("%d", &d);
    if (a < b && a < c && a < d)
    {
        printf("a Is Smaller %d ", a);
    }
    else
    {
        printf("\nA is Not Smaller");
    }
    if (b < a && b < c && b < d)
    {
        printf("b Is Smaller%d ", b);
    }
    else
    {
        printf("\n B is Not Smaller");
    }
    if (c < a && c < b && c < d)
    {
        printf("\n C Is Smaller%d ", c);
    }
    else
    {
        printf("\n C is Not Smaller");
    }
    if (d < a && d < b && d < c)
    {
        printf("\n D Is Smaller : %d ", d);
    }
    else
    {
        printf("\n d is Not Smaller");
    }

    return 0;
}