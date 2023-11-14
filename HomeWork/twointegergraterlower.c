#include <stdio.h>
int main()
{
    int a,b;
    printf("enter the A Value : ");
    scanf("%d",&a);
    printf("enter the B Value : ");
    scanf("%d",& b);
    int q = a/b;
    int r = a-b*q;
    printf("your A Value is = %d your B value is %d and final answer is %d",a,b,r);
    return 0;
}