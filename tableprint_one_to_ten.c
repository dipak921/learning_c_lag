#include<stdio.h>
int main()
{
    int i;
    for(i = 1; i<=10; i++)
    {
        printf("%d  %d  %d  %d  %d  %d  %d  %d  %d  %d", i*1,i*2,i*3,i*4,i*5,i*6,i*7,i*8,i*9,i*10);
        if (i<=10)
        {
            printf("\n");
        }
        

        // printf("%d\n  %d\n  %d\n  %d\n  %d\n  %d\n  %d\n  %d\n  %d\n  %d\n", i*1,i*2,i*3,i*4,i*5,i*6,i*7,i*8,i*9,i*10);
    }

    return 0;
}