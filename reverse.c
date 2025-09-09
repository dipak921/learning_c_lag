// // wap to print reverse of a given number and store it
// #include<stdio.h>
// int main()
// {
//     int a[] = {10,20,30,40,50,60};
    
//     int n = 6;
//     for (int i = 6-1; i >= 0; i--) {
//         printf("%d ", a[i]);
//     }

//     return 0;
// }

// this array is user input
#include<stdio.h>
int main()
{
    int s;
    printf("enter array size :");
    scanf("%d", &s);
    int seat[s];

    // array store form user input
    printf("enter a element : ");
    for (int i = 0; i<s; i++)
    {
        scanf("%d",&seat[i]);
    }

    //print array3
    for ( int i = 0; i<s; i++)
    {
        printf("%d ",seat[i]);
    }
    printf("\n Reverse Array is :");
    for (int i = s-1; i >= 0; i--) {
        printf("%d ", seat[i]);
    }

    return 0;
}