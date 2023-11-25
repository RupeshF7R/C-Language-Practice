#include<stdio.h>
int main(){
    int a;
    printf("enter a number : ");
    scanf("%d",&a);
    if (a%5 == 0 && a%3 == 0)
    {
        printf("this number is divied 3/5");
    }else{
        printf("channge the number");
    }
    
    return 0;
}