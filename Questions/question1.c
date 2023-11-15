//  give the Input In Integer and give me output in flaot value but answer the . value only like 5.8
// but answer the .8 value only ?

#include <stdio.h>
int main()
{
    printf("hello\n");
    float a;

    // float c = a - b;
    printf("enter the value : ");
    scanf("%f", &a);
    int b = a;
    printf("answer is %d", b);
    float c = a - b;
    printf("answer is : %f", c);

    return 0;
}