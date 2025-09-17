#include<stdio.h>
#include<string.h>
union student
{
    char name[20];
    int age;
    float wt;
};

int main()
{
    union student s;// = {"Dipak",18,45.2};
    // s.name = "Dipak";
    // strcpy(s.name, "Dipak"); 
    // printf("Name :%s\n",s.name);

    // s.age = 18;
    // printf("Age is  :%d\n",s.age);

    // s.wt = 45.5;
    // printf("Wight is :%f",s.wt);

    union student v = {"Ram",28,56.2};
    printf("%s\n %d\n %f",v.name,v.age,v.wt);






    return 0;
}