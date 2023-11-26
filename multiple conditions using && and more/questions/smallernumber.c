// if the ages of ram, shyam and ajay are input through the keyboard , write a program to determine the youngest of the three.
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter Raju Age  : ");
    scanf("%d", &a);
    printf("Enter shyam Age  : ");
    scanf("%d", &b);
    printf("Enter Raja Age  : ");
    scanf("%d", &c);

    if (a < b && a < c)
    {
        printf("\nRaju Is Smaller %d",a);
    }else{
        printf("\nRaju is Not Smaller");
    }
    if (b < a && b < c)
    {
        printf("\nshyam Is Smaller %d ",b);
    }
    else
    {
        printf("\nshayam is Not Smaller");
    }
    if (c < a && c < b)
    {
        printf("\nRaja Is Smaller %d",c);
    }
    else
    {
        printf("\nRaja is Not Smaller");
    }

    return 0;
}