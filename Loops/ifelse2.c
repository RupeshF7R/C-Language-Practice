#include <stdio.h>
int main()
{
    int a;
    printf("Enter a Number : ");
    scanf("%d", &a);
    // if (a%5 == 0)
    // {
    //     printf("right Choice ");
    // }else{
    //     printf("wrong choice");
    // }

    if (a % 5 == 0)
    {
        printf("right choice");
    }
    if (a % 5 != 0)
    {
        printf("chal bhan ke bhai");
    }

    return 0;
}