// write the program to solve the given equation
// a.	   y=x2-2x+1   
// b.	   y=a3-3a2b+3ab2-b2
#include<stdio.h>
int main()
{
    float x,y, a,b;
    printf("enter a x :");
    scanf("%f",&x);

    y= x*x*2 -2 *x +1;
    printf("\nThe Value of y is : %.2f",y);
    
    // y=a3-3a2b+3ab2-b2
    printf("\nEnter the value of a :");
    scanf("%f",&a);

    printf("\nEnter the value of b :");
    scanf("%f",&b);

    y = a * a * a - 3 * a * a * b + 3 * a * b * b - b * b;


    printf("The value of Y:%.2f", y);





    return 0;
}