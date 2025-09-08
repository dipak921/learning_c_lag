#include<stdio.h>
int  main()
{
    // int arr_marks [] = {10,20,30,4,0,50,60};
    // printf("%d",arr_marks[0]);

    // int arr_roll [] = {10,20,30,40,50,60};
    // for (int i = 0; i<6; i++)
    // {
    //     printf("%d ",arr_roll[i]);
    // }

    
    
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
    











    return 0;
}