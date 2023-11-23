#include <stdio.h>
int main()
{

    int l, b, a, p, s, s2;
    printf("Enter The Leanght of Rectangle : ");
    scanf("%d", &l);
    printf("Enter The Leanght of Breath : ");
    scanf("%d", &l);
    s = l * b;
    s2 = 2 * (l + b);
    if (s == s2)
    {
        printf("the area & parimeter Are same");
    }
    if (s > s2)
    {
        printf("area is big");
    }
    if (s < s2)
    {
        printf("area is small perimeter is big");
    }

    return 0;
}