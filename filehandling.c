// #include<stdio.h>
// // file create and data enter
// int main()
// {
//     FILE *fp; // file pointer 
//     fp = fopen("Dipak.txt","w"); // open file in write
//     fprintf(fp,"This is file handling file\n");
//     fprintf(fp,"Important notes.\n");

//     fclose(fp); // close file


//     return 0;
// }




//read data on console



// #include<stdio.h>
// int main()
// {
//     FILE *fp; 
//     char text[50];

//     fp = fopen("Dipak.txt","r"); // open file in read
//     while (fgets(text, sizeof(text), fp )!=NULL)
//     {
//         printf("%s",text);
//     }
//     fclose(fp); // close file


//     return 0;
// }



// apend data add data 


#include<stdio.h>
int main()
{
    FILE *fp; 
    fp = fopen("Dipak.txt","a");
    fprintf(fp,"Control Statment\n");
    fprintf(fp,"loop in c lagugare");

    fclose(fp); // close file


    return 0;
}