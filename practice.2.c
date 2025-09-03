
// wap to print sum of digit of a given number
#include<stdio.h>
int main()
{
    int n;
    int sum = 0;
    printf("Enter a number : ");
    scanf("%d", &n);
    int count = 0;
    int lastDigit = 0;
    while (n!=0)
    {
        lastDigit = n %10; // remender always last digit
        sum = sum + lastDigit; // addition of last digit and sum
        n = n /10;
    }
    
    printf("The Sum of digits are %d",sum);

    return 0;
}
