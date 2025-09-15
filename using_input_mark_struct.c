#include<stdio.h>
struct mark
{
    float marks[3][3];
};

int main()
{
    float sum,avg;
    struct mark m ;
    printf("Enter a Marks :");
    for (int i = 0; i < 3; i++)
    {
       for (int j = 0; j < 3; j++)
       {
        scanf("%f", &m.marks[i][j]);
       }
    }

    for (int i = 0; i < 3; i++)
    {
        sum = 0;
       for (int j = 0; j < 3; j++)
       {
         sum = sum + m.marks[i][j];
       }
        avg = sum / 3;
       printf("Average marks of student %d=%f\n", i+1,avg);
       
    }
    
    
    return 0;
}