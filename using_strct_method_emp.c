#include<stdio.h>
struct emp
{
     int emp_id;
     char emp_name[25];
     float emp_salary;
};

int main()
{
    struct emp e1 = {101,"Dipak", 25000.00};
    struct emp e2 = {102,"Annasaheb", 75000.00};
    struct emp e3 = {103,"Yogesh", 70000.00};

    printf("Employee id :%d\n Employee name :%s\n Employee Salary :%f ",e1.emp_id,e1.emp_name,e1.emp_salary);
    printf("\nEmployee id :%d\n Employee name :%s\n Employee Salary :%f ",e2.emp_id, e2.emp_name, e2.emp_salary);
    printf("\nEmployee id :%d\n Employee name :%s\n Employee Salary :%f ",e3.emp_id, e3.emp_name, e3.emp_salary);









    return 0;
}