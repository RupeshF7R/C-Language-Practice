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
    if (a>b && a>c)
    {
       printf("a Is Greater %d ",a);
    }else{
        printf("\nA is Not Gereater");
    }
    if (b > a && b > c)
    {
        printf("b Is Greater%d ", b);
    }
    else
    {
        printf("\n B is Not Gereater");
    }
    if (c>a && c>b)
    {
        printf("\n C Is Greater%d ", c);
    }else{
        printf("\n C is Not Gereater");
    }

        return 0;
}