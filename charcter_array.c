#include<stdio.h>
int main()
{
    char s;
    printf("enter array size :");
    scanf("%c", &s);
    int seat[s];

    // array store form user input
    printf("enter a element : ");
    for (char i = 0; i<s; i++)
    {
        scanf("%c",&seat[i]);
    }

    printf("ARRAY IS GIVEN :");
    //print array3
    for ( char i = 0; i<s; i++)
    {
        printf("%c ",seat[i]);
    }
    





    return 0;
}
