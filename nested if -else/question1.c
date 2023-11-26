// take positive integer input and tell if it
//  is divisible by 5/3

#include <stdio.h>
int main(){
    int a;
    printf("enter A Number : ");
    scanf("%d",&a);
    if (a%5 ==0 )
    {
        printf("divided By 5");
        if (a % 3 == 0)
        {
            printf("\ndivided By 3");
        }else{
            printf("the number is not Divied By 3");
        }
        
    }else{
        printf("the number is not Divied By 5");
    }
    
    return 0;
} 