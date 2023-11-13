#include <stdio.h>
int main()
{
    float total;
    float outof;
    printf("\nHello welcome to Nofix Univercity");
    printf("\nEnter Your Total Marks");
    scanf("%f", &total);
    printf("\nEnter Your Out OF Marks");
    scanf("%f", &outof);
    printf("%f", (total/outof)*100);

    return 0;
}