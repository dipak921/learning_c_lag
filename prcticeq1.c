// Q1.The total cost of an item is given as its basic cost plus 33% excise 
// plus 14%sales tax plus 4% octroi.If     the basic cost is an input,
// write a program to calculate total cost.
// Total cost=basic+0.33*basic+0.14*basic +0.04*basic.

#include<stdio.h>
int main()
{
    float basicCost, totalCost;
    printf("Enter a Bacsic Cost :");
    scanf("%f", &basicCost);

    totalCost = basicCost + 0.33 * basicCost + 0.14 * basicCost + 0.04 * basicCost;

    printf("Total Cost is : %.2f",totalCost);



    return 0;
}