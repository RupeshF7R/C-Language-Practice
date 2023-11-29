//  is the age of Ram Shyam and Ajay are input through the 
// keyboard write a program to determine the youngest of the three.
#include <stdio.h>
int main()
{
    int rupesh, kuldeep, yashwant;
    printf("Enter Rupesh DOB : ");
    scanf("%d", &rupesh);
    printf("Enter Kuldeep DOB : ");
    scanf("%d", &kuldeep);
    printf("Enter Yashwant DOB : ");
    scanf("%d", &yashwant);
    if (rupesh > kuldeep)
    {
        if (rupesh > yashwant)
        {
            printf("Rupesh IS Bigger To All %d", rupesh);
        }
        else
        {
            printf("Yashwant IS Bigger To All %d", yashwant);
        }
    }
    else
    {
        if (kuldeep > yashwant)
        {
            printf("Kuldeep IS Bigger To All %d", kuldeep);
        }else{
            printf("Yashwant IS Bigger To All %d", yashwant);
        }
    }

    return 0;
}