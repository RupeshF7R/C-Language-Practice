#include <stdio.h>
int main()
{
    int a, b, sum;
    
    printf("enter your two number");
    printf("\nenter your 1 number");
    scanf("%d", &a);
    printf("\nenter your 2 number");
    scanf("%d", &b);
    sum = a + b;
    printf("total is %d ", sum);
    return 0;
}