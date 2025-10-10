// Accept radius from user  and Calculate and 
// print area and circumference of the circle.
#include<stdio.h>
int main()
{
    float area, radius,circumference, PI = 3.14;
    printf("Enter a radius :");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("The area is : %f and circumference is : %f",area,circumference);

    return 0;
}