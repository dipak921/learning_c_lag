#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);

    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=n; j++)
        {
            if(i == n/2 +1  || j == n/2 + 1) // declare int a = n/2+1; ^
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    //OUTPUT
    //Enter a number :7
        // *   
        // *   
        // *   
        // *******
        // *   
        // *   
        // *

        

    return 0;
}