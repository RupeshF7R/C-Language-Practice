// take positive integer input and tell if it
//  is divisible by 5/3 but not divisible by 15

#include <stdio.h>
int main()
{
    int a;
    printf("enter A Number : ");
    scanf("%d", &a);
    // if (a % 5 == 0)
    // {
    //     printf("\nthis Number Divided By 5");
    //     if (a % 3 == 0)
    //     {
    //         printf("\nthis Number Divied By 3");
    //     }
    //     else
    //     {
    //         printf("\nThis Number Not Divied By 3");
    //     }
    //     if (!a % 15)
    //     {
    //         printf("\nthis Number is Not Divied By 15");
    //     }
    //     else
    //     {
    //         printf("\nthis Number Is Not Divied By 15");
    //     }
    // }
    // else
    // {
    //     printf("\nthis number is not Divied by 5");
    // }
    if ((a%5==0 || a%5==0) && a%15!=0)
    {
        printf("this Number is Divided By 5/3 but not 15");
    }else{
        printf("this Number IS fake ");
    }

    return 0;
}