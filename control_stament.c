#include <stdio.h>

int main()
{
    // int n1;
    // printf("Enter a number above 15: ");
    // scanf("%d",&n1);
    // if (n1 < 15)
    // {
    //     printf("oops! your number is less than 15");
    // }
    // printf("\nEnd a Program");

    // acept 2 number s and print max of 2 numbrs only one if
    // int a,b;
    // printf("Enter a number : ");
    // scanf("%d",&a);
    // printf("Enter a number : ");
    // scanf("%d",&b);

    // if (a > b)
    // {
    //     printf("Max = ",a);

    // }

    // Accept a number print its absolute value
    // int n;
    // printf("Enter a number : ");
    // scanf("%d",&n);
    // if (n < 0){
    // n = -n;
    // }
    // printf("Absolute value = %d\n", n);

    /*****************IF - ELSE ********************** */

    // accept age form user and print your elgible or not
    // int age;
    // printf("Enter your age :");
    // scanf("%d", &age);
    // if (age >= 18)
    // {
    //     printf("Your are elgibale for vote !");
    // }else{
    //     printf("Your are elgibale for not vote !");
    // }

    // accept a number it is positive or negative
    // int a;
    // printf("Enter a number : ");
    // scanf("%d",&a);

    // if (a > 0)
    // {
    //     printf(" Your number is Positive ");
    // }else{
    //     printf("Your number is Negative");
    // }

    // even or odd number

    // int a;
    //     printf("Enter a number : ");
    //     scanf("%d",&a);

    //     if (a %2 == 0)
    //     {
    //         printf(" Your number is Even ");
    //     }else{
    //         printf("Your number is Odd");
    //     }

    // if(-1){
    //     printf("Good");
    // }else{
    //     printf("Hello");
    // }

    // good becuser -1 is non zero is turth

    // // Q.3
    // int a,b;
    //     printf("Enter a number : ");
    //     scanf("%d",&a);
    //     printf("Enter a number : ");
    //     scanf("%d",&b);

    //     if (a>b)
    //     {
    //         printf("Max Number is = %d",a);
    //     }else
    //     {
    //        printf("Max Number is  = %d",b);
    //     }

    /***************** NESTED IF ELSE  ********************** */
    // ACCEPT 3 NUMNBER
    // int a,b,c;
    // printf("Enter a number : ");
    // scanf("%d",&a);
    // printf("Enter b number : ");
    // scanf("%d",&b);
    // printf("Enter c number : ");
    // scanf("%d",&c);

    // if(a>b){
    //     if (a>c)
    //     {
    //         printf(" b in max ");
    //     }else{
    //         printf(" c is max");
    //     }

    // }else{
    //     if(b > c){
    //         printf("a is max");
    //     }else{
    //         printf("c is max ");
    //     }
    // }

    // second way solve nested else if

    // if (a >b && a>c)
    // {
    //     printf("A is max");
    // }
    // else if (b > a && b > c){
    //     printf("B is max");
    // }
    // else{
    //     printf("C is max");
    // }

    // Accept an alphabet and  print whether it is in upper case or lower case and whether its is not an alphabet

    // char ch;
    // printf("Enter a character: ");
    // scanf("%c", &ch);

    // if (ch >= 'A' && ch <= 'Z')
    //     printf("is an Uppercase Alphabet.\n", ch);
    // else if (ch >= 'a' && ch <= 'z')
    //     printf("is a Lowercase Alphabet.\n", ch);
    // else
    //     printf(" is Not an Alphabet.\n", ch);

    // Q2.Write a program to read a character(alphabet) and convert it to either case.

    // char ch;

    // printf("Enter an alphabet character: ");
    // scanf("%c", &ch);

    // // Check and convert case
    // if (ch >= 'A' && ch <= 'Z')
    // {
    //     ch = ch + ('a' - 'A');
    //     printf("Converted to lowercase: %c\n", ch);
    // }
    // else if (ch >= 'a' && ch <= 'z')
    // {
    //     ch = ch - ('a' - 'A');
    //     printf("Converted to uppercase: %c\n", ch);
    // }
    // else
    // {
    //     printf("The entered character is not an alphabet.\n");
    // }

    // q.3to either case.
    // Q3.Accept marks of 5 subjects. Calculate percentage and
    // display the class obtained by the student.
    // pct<40
    // fail
    // pct between 40 and 49 pass
    // pct between 50 and 59 second class
    // pct between 60 and 74 first class
    // pct >74 distinction

    float mark, sub1, sub2, sub3, sub4, sub5, total_marks, perct;
    printf("Enter a Sub 1 :");
    scanf("%f", &sub1);
    printf("Enter a Sub 2 :");
    scanf("%f", &sub2);
    printf("Enter a Sub 3 :");
    scanf("%f", &sub3);
    printf("Enter a Sub 4 :");
    scanf("%f", &sub4);
    printf("Enter a Sub 5 :");
    scanf("%f", &sub5);

    total_marks = sub1 + sub2 + sub3 + sub4 + sub5;
    perct = total_marks / 5;


    if (perct < 40)
    {
        printf("Fail\n");
    }

    else if (perct > 40.00 && perct < 49)
    {
        printf("Pass\n");
    }
    else if (perct > 50 && perct < 59)
    {
        printf("Secon Class\n");
    }
    else if (perct > 60 && perct < 74)
    {
        printf("Frist Class\n");
    }
    else if (perct > 75 && perct < 100)
    {
        printf("Distinction\n");
    }
    else
    {
        printf("Invalid Percentage!");
    }

    return 0;
}