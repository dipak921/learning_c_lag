#include<stdio.h>
int main()
{
    // char letter[] = {'d','i','p','a','k'};
    // //printf("%c", letter[2]);
    // for ( int i = 0; i<=5; i++)
    // {
    //     printf("%c ",letter[i]);
    // }

    int s;
    printf("Enter a size :");
    scanf("%d",&s);
    
    char letter[5];
   printf("Print array is  :");
    for (int  i=0; i<s; i++)
    {
        scanf(" %c",&letter[i]);
    }
    printf("character array is  :");
    for (int  i=0; i<s; i++)
    {
        printf("%c ",letter[i] );
    }







    return 0;
}
