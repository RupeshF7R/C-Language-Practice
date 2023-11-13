#include <stdio.h>
int main()
{
    int rollno;
    float m1;
    float m2;
    float m3;
    float m4;
    float m5;
    float fnl;
    printf("\nHello welcome to Nofix Univercity");
    printf("\nHEllo Babu enter your Roll number\n");
    scanf("%d", &rollno);
    printf("\nHEllo Babu enter your Roll number\n");
    printf("\nYour Roll Number Is %d ", rollno);
    printf(" \nEnter Your Maths Marks\n");
    scanf("%f", &m1);
    printf("Enter Your science Marks\n");
    scanf("%f", &m2);
    printf("Enter Your History Marks\n");
    scanf("%f", &m3);
    printf("Enter Your Hindi Marks\n");
    scanf("%f", &m4);
    printf("Enter Your English Marks\n");
    scanf("%f", &m5);
    printf("\n Your Total Marks Is %f", m1 + m2 + m3 + m4 + m5);
    fnl = (m1+m2+m3+m4+m5)/5;
    printf("\n Your percentage is %f", fnl);

    return 0;
}