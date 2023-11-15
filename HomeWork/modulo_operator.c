#include <stdio.h>
int main()
{
    printf("Learn About Modulo Operator\n");
    int a;
    printf("Enter 1st NUmber");
    scanf("%d",&a);
    printf("Enter 2nd NUmber");
    int b;
    scanf("%d",&b); 
    int r = a % b;
    printf("%d", r);
    return 0;
}