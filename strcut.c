#include<stdio.h>
struct  student {
    int roll;
    char name[20];
    float weight;
};
int main()
{
//    struct  student s1;
//    s1.roll = 1;
//    s1.name = "Dipak";
//    s1.weight = 55.5;

struct  student std = {1,"Dipak",55.5};


   printf(" Id : %d\n",std.roll);
   printf("Name : %s\n",std.name);
   printf("Weight : %f\n",std.weight);
   
        
    






    return 0;
}