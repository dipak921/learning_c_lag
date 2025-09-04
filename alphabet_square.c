#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);

    // for(int i =1; i<=n; i++)
    // {
    //     int a = 1;
    //     for(int j=1;j<=n; j++)
    //     {
    //         int d = a + 64;  // d = 65
    //         char ch = (char)d; // ch = (char)65 -> ch = 'A'
    //         printf("%c ",ch);
    //         a++;
    //     }
    //     printf("\n");
    // }
    //OUTPUT
    // Enter a number :5
    // A B C D E 
    // A B C D E 
    // A B C D E 
    // A B C D E 
    // A B C D E


    for(int i =1; i<=n; i++)
    {
        int a = 1;
        for(int j=1;j<=i; j++) // single change only n position i
        {
            int d = a + 64;  // d = 65
            char ch = (char)d; // ch = (char)65 -> ch = 'A'
            printf("%c ",ch);
            a++;
        }
        printf("\n");
    }
    //OUTPUT
    // Enter a number :5
    // A 
    // A B 
    // A B C
    // A B C D
    // A B C D E
        




    return 0;
}