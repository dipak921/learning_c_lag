#include<stdio.h>
int main()
{
    int i ;
    for (i=1; i <= 5; i++) // row
    {
        for(int j = 1; j<=i; j++){ //column
            printf("*");

        }
        printf("\n");
        
    }



    return 0;

}