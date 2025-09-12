#include<stdio.h>
int main()
{

    int row,col;
    printf("enter a row size :");
    scanf("%d", &row);

    printf("enter a col size :");
    scanf("%d", &col);
    
    int student_marks[row][col];
    printf("enter a first row value and then colunm value :");

    for (int  i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &student_marks[i][j]);
        }
        printf("\n");
        
    }
    
    for (int  i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", student_marks[i][j]);
        }
        printf("\n");
        
    }




    return 0;
}