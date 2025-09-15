// #include <stdio.h>

// struct student {
//     float marks[3];
// };

// int main() {
//     struct student s1 = {{30.2, 40.0, 60.5}};
//     float sum = 0;

//     for (int i = 0; i < 3; i++) {
//         sum = sum + s1.marks[i];
//     }

//     float avg = sum / 3;
//     printf("The average marks is: %f\n", avg);

//     return 0;
// }
// END CODE

// #include <stdio.h>

// struct student {
//     float marks[3];
// };

// int main() {
//     struct student s1;
//     float sum = 0;
//     printf("enter marks : ");

//     for (int i = 0; i < 3; i++) {
//         scanf("%f", &s1.marks[i]);
//         sum = sum + s1.marks[i];
//     }
   

//     float avg = sum / 3;
//     printf("The average marks is: %f\n", avg);

//     return 0;
// }
// END CODE




#include <stdio.h>

struct student {
    float marks[3][3];
};

int main() {
    struct student s1;
    float sum = 0;
    printf("enter marks : ");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++){
            scanf("%f", &s1.marks[i][j]);
            //sum = sum + s1.marks[i][j];
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j= 0; j < 3; j++)
        {
            sum = sum + s1.marks[i][j];
            
        }
        float avg = sum / 3;
        printf("The average marks is: %f\n", avg);

        
    }
    
   

    
    return 0;
}

