#include<stdio.h>

// Temperature of a city in Fahrenheit degrees is input through the keyboard.
// Write a program to convert this temperature into centigrade.

int main(){
    float fahrenheit, centigrade;

    printf("enter a Fahrenheit: ");
    scanf("%f",&fahrenheit);

    centigrade = fahrenheit - 32 * 5/9;

    printf("enter a Centigragde :%f ",centigrade);






    return 0;
}