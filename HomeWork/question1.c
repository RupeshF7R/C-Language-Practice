#include <stdio.h>
int main()
{
    float a;

    printf("Hello Desi Fuckers\n");
    printf("Enter The Float Vlaue : ");
    scanf("%f", &a);
    int b = a;

    printf("Answer is %d \n", b);
    float c = a - b;
    printf("final answer is %f", c);

    return 0;
}