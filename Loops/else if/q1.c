#include <stdio.h>
int main()
{
    int sp, cp;
    printf("enter the Cost Price : ");
    scanf("%d", &cp);
    printf("enter the selling Price : ");
    scanf("%d", &sp);
    if (sp > cp)
    {
        printf("pROFIT HAI");
    }
    else if (cp > sp)
    {
        printf("Loss HAi");
    }
    else
    {
        printf("No Losss No Profit");
    }

    return 0;
}