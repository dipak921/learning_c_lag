#include<stdio.h>
struct mark
{
    float marks[3][3];
};

int main()
{
    float sum,avg;
    struct mark m1 = 
    {
        {
            {45,52,62},//53
            {48,78,69},//65
            {78,56,68}//67.3333333
        }
        
    };

    for (int i = 0; i < 3; i++)
    {
        sum = 0;
       for (int j = 0; j < 3; j++)
       {
         sum = sum + m1.marks[i][j];
       }
       avg = sum / 3;
       printf("Average marks of student %d=%f\n", i+1,avg);
       
    }
    
    
    return 0;
}