// #include<stdio.h>
// struct  student {
//     int roll;
//     char name[20];
//     float weight;
// };
// int main()
// {
// //    struct  student s1;
// //    s1.roll = 1;
// //    s1.name = "Dipak";
// //    s1.weight = 55.5;

// struct  student std = {1,"Dipak",55.5};


//    printf(" Id : %d\n",std.roll);
//    printf("Name : %s\n",std.name);
//    printf("Weight : %f\n",std.weight);
   
        
    






//     return 0;
// }

 // 2. write a program to define a structure Book with members title, author, and price. Rea
#include<stdio.h>

struct Book(

char title[48];
char author [4e];

float price;

);

int main(){
struct Book b1=("c_programming", "demmis_ritchi", 300);
struct Book b2=("python_programming", "Guido_van_Rossum", 600);
struct Book b3=("java_programming", "james_Gosling", 700);
struct Book b4=("cpp_programming", "bjarne stroustrup", 301);
struct Book b5=("javascript_programming", "brenden_eich", 420);
printf("details of book 1:\n");

printf(" Title: %s\n Author: %s\n price:%f\n", b1.title, b1.author,b1.price);
// printf("\ndetails of book 2:\n");
// printf(" Title: %s\n Author: %s\n price:%.2f\n", b2.title,b2.author, b2.price);
// printf("\ndetails of book 3:\n");
// printf(" Title: %s\n Author: %s\n price:%.2f\n", b3.title, b3.author, b3.price);
// printf("\ndetails of book 3:\n");
// printf(" Title: %s\n Author: %s\n price:%.2f\n", b3.title, b3.author, b3.price);
// printf("\ndetails of book 4:\n");
// printf(" Title: %s\n Author: %s\n price:%.2f\n", b4.title, b4.author, b4.price);
// printf("\ndetails of book 5:\n");
// printf(" Title: %s\n Author: %s\n price:%.2f\n", b5.title, b5.author, b5.price);


return 0;
}