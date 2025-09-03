//write a program to print odd of all the even digits of a given number
#include<stdio.h>
int main()
{
    int n;
    int odd = 0;
    printf("Enter a number : ");
    scanf("%d", &n);
    int count = 0;
    int lastDigit = 0;
    while (n!=0)
    {
        lastDigit = n %10; // remender always last digit
        if (!(n%2==0))// this condition check a number is even or not 
        {
            odd = odd + lastDigit; // addition of last digit and sum
        }
        
        
        n = n /10;
    }
    
    printf("The odd of digits sum are %d",odd);
    return 0;
}