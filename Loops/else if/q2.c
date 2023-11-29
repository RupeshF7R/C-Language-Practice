#include <stdio.h>
int main()
{
    int a, b;
    printf("\nEnter Your Percentage Number bellow 100 : ");
    scanf("%d", &a);
    // if (a>95)
    // {
    //     printf("excellent");
    // }
    // else if (a>90)
    // {
    //     printf("Very Good");
    // } 
    // else if (a > 80)
    // {
    //     printf("Good");
    // }
    // else if (a > 60)
    // {
    //     printf("U can beeter do it again");
    // }
    // else if (a > 45)
    // {
    //     printf("do it again");
    // }else{
    //     printf("do it again, again , again");
    // }

    if (a > 95)
    {
        printf("a++");
    }

    else{
        if (a>85)
        {
            printf("A");
        }
        if (a > 65)
        {
            printf("b");
        }
        if (a > 45)
        {
            printf("c");
        }

        printf("FAil AHi Tu");
    }

    return 0;
}

// take input percentage of a student and print the grade according to marks:
//  excellent 90-100
//  very good 80-90
//  good 70-80
// can do better 60-70
//  average blue average 50-60
//  40 less fail 10-40
