#include <stdio.h>
int main()
{
    // 4/3 pi r*r*r
    int v;
    int r;
    printf("Welcome to Nofix Formula");
    printf("\nEnter the Radius of spahre\n");
    scanf("%d", &r);
    printf("\nthe redius of sphare is %d", r);
    printf("\nthe volume of sphare is %f", 4 * 3.1489 * r * r * r / 3);
    v = r;
    printf("\n%f", v);

    return 0;
}