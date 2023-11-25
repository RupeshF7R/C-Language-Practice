#include <stdio.h>
int main()
{
    int a;
    printf("enter a number : ");
    scanf("%d", &a);
    if (a % 3 == 0 || a % 5 ==0)
    {
        printf("divied by 3");
    }else{
        printf(" \nnot divied by 3");
    }
    if (a% 5 == 0 || a%3)
    {
        printf("\ndivied by 5");
    }else{
        printf(" \nnot divied by 5");
    }

    return 0;
}