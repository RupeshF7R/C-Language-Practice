#include <stdio.h>
int main()
{
    float b, h, fi;
    printf("Welcome to NOFIX CODES");
    printf("\nEnter Your Triangle Base\n");
    scanf("%f",& b);
    printf("Enter Your Triangle Height");
    scanf("%f", &h);
    fi = b * h / 2;
    printf("Area Of Triangle is %f", fi);

    return 0;
}