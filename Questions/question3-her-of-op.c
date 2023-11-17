#include <stdio.h>
int main()
{
    printf("helooo");
    int a = 9, b = 6, c, d;
    float e, f;

    c = a / b * b;
    d = b / a * b;

    e = a / b * b;
    f = b / a * b;
    printf("c = %d d = %d e = %f f = %f", c, d, e, f);
    return 0;
}