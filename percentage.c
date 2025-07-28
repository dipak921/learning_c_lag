#include<stdio.h>
int main()
{
    float physic = 59;
    float math = 56;
    float science = 68;
    float marathi = 99;
    float chemisty = 58;
    float perctage = (physic + math + science + marathi + chemisty) / 5;
    printf("Percentage is %f \n",perctage);

    // calualate CGPA
    float cgpa = 8.0;
    float percetage = cgpa * 9.5;
    printf("CGPA is :  %f\n", percetage);

    // four subject marks

    float m1 = 38;
    float m2 = 28;
    float m3 = 32;
    float m4 = 21;
    float perce = (m1 + m2 + m3 + m4) / 4;
    printf("Percentage is %f \n", perce);
    return 0;
}