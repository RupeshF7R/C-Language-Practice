#include <stdio.h>
int main()
{
    int x1, y1, x2, y2, x3, y3;
    // printf("\nEnter The NUmbers Like 1 ");
    printf("\nEnter The X1 : ");
    scanf("%d", &x1);
    printf("\nEnter The y1 : ");
    scanf("%d", &y1);
    printf("\nEnter The X2 : ");
    scanf("%d", &x2);
    printf("\nEnter The y2 : ");
    scanf("%d", &y2);
    printf("\nEnter The X2 : ");
    scanf("%d", &x3);
    printf("\nEnter The y3 : ");
    scanf("%d", &y3);
    int m1, m2;
    m1 = (y2 - y1) / (x2 - x1);
    m2 = (y3 - y2) / (x3 - x2);
    if (m1 == m2)
    {
        printf("this is right");
    }
    else
    {
        printf("not on line");
    }

    return 0;
}