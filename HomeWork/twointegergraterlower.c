#include <stdio.h>
int main()
{
    int a,b,s,f;
    // float f;
    printf("welcome to Nofix academy");
    printf("enter the a Value");
    scanf("%d",&a);
    printf("enter the B Value");
    scanf("%d", &b);
    s = a<b;
    printf("greater then value is %d",s);
    f = a/b;
    printf("last final value is %d", f);
    return 0;
}