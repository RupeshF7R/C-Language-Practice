#include <stdio.h>
int main()
{
    int sp, cp, fp, lp, cpp, spp;
    printf("Enter a Selling Price of a item : ");
    scanf("%d", &sp);
    printf("Enter a cost of Price of a item : ");
    scanf("%d", &cp);
    if (sp == cp)
    {
        printf("\nNo Profit NO Loss");
    }
    if (sp > cp)
    {
        fp = sp - cp;
        printf("nice %d Rupee Profit", fp);
    }
    else
    {
        lp = sp - cp;
        printf("\nbro you are making loss incrage price now %d", lp);
    }
    spp = sp - cp;
    cpp = cp - sp;
    printf("\nseller profit is : %d inr  seller loss is  %d inr: ", spp, cpp);
    return 0;
}