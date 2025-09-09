#include<stdio.h>
int main()
{
    int s;
    int sum = 0;
    printf("enter array size :");
    scanf("%d", &s);
    int seat[s];

    // array store form user input
    printf("enter a element : ");
    for (int i = 0; i<s; i++)
    {
        scanf("%d",&seat[i]);
    }
    for ( int i = 0; i<=s; i++)
    {
        printf("%d ",seat[i]);
    }
    
    for ( int i = 0; i<=s; i++)
    {
        sum = sum + seat[i];
    }

    float avg = sum / s;

    printf("\n The Avarage is : ", avg);
    
    return 0;
}

