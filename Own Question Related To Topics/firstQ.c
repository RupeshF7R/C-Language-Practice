#include <stdio.h>
int main()
{
    // hierarchy of operators
    printf("helooo\n");
    int a, b, c, d;
    float e, f;
    scanf("%d",&a);
    

    c = a / b * b;
    scanf("%d", &b);
    d = b / a * b;

    e = a / b * b;
    f = b / a * b;
    printf("c = %d d = %d e = %f f = %f", c, d, e, f);
    return 0;
}