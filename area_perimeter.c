#include<stdio.h>

int main(){
//     Accept length and breadth of a rectangle .Calculate and  
// print area and perimeter of the rectangle.

    float length,breadth,area,perimeter;

    printf("Enter a lenght :");
    scanf("%f", &length);

    printf("Enter a Breadth :");
    scanf("%f", &breadth);

    area = length * breadth;
    perimeter = 2 * (length +breadth);

    printf("the area is %.2f \n perimet is %.2f", area,perimeter);


    return 0;
}