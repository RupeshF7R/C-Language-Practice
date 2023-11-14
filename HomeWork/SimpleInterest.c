#include <stdio.h>
int main()
{
    float p, r, t,si;

    printf("Welcome to NoFix Emi Loans");
    printf("\nThis Is Simple Interest Counter app");
    printf("\nEnter Your Priciple Amount\n");
    scanf("%f", &p);
    printf("\nEnter Your Interest Rate\n");
    scanf("%f", &r);
    printf("\nEnter Your time (in MONTHS)\n");
    scanf("%f", &t);
    si = p*r*t/12/100+p;
    printf("\nThis Amount Pay Extra %f\n",si);

    return 0;
}