#include<stdio.h>

int main(){
    float sub1,sub2,sub3,sub4,sub5;
    float total_marks;
    float percentage;
    printf("Enter a sub1 : ");
    scanf("%f", &sub1);

    printf("Enter a sub2 : ");
    scanf("%f", &sub2);

    printf("Enter a sub3 : ");
    scanf("%f", &sub3);

    printf("Enter a sub4 : ");
    scanf("%f", &sub4);

    printf("Enter a sub5 : ");
    scanf("%f", &sub5);

    total_marks = sub1 + sub2 + sub3 + sub4 +sub5;
    percentage =  total_marks / 5;

    printf("\n Total marks is %.2f\n Percentage is %.2f",total_marks,percentage);



    return 0;
}