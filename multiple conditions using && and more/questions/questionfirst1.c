// take postitive interger input and tel if it is a three digit number or not ?

#include <stdio.h>
int main(){
    int a;
    printf("enter any number : ");
    scanf("%d",&a);
    if (a > 99 && a<1000)
    {
        printf("this is three digit number ");
    }else{
        printf("this is not three digit number");
    }
    
    
    return 0;
}