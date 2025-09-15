#include<stdio.h>
struct book
{
    char book_title[50];
    char book_author[30];
    float book_price;

};

int main()
{
    struct book b1 = {"The God of Small Things","Arundhati Roy", 374};
    struct book b2 = {"Atomic Habits","James Clear", 159};
    struct book b3 = {"Homo Deus: A Brief History of Tomorrow","Yuval Noah Harari", 299};
    struct book b4 = {"The Nightingale","Kristin Hannah", 199};
    struct book b5 = {"The Palace of Illusions","Chitra Banerjee Divakaruni", 219};

    printf("\n Book Name : %s\n Book Author Name :%s\n Book Price :%f\n",b1.book_title,b1.book_author,b1.book_price);
    printf("\n Book Name : %s\n Book Author Name :%s\n Book Price :%f\n",b2.book_title,b2.book_author,b2.book_price);
    printf("\n Book Name : %s\n Book Author Name :%s\n Book Price :%f\n",b3.book_title,b3.book_author,b3.book_price);
    printf("\n Book Name : %s\n Book Author Name :%s\n Book Price :%f\n",b4.book_title,b4.book_author,b4.book_price);
    printf("\n Book Name : %s\n Book Author Name :%s\n Book Price :%f\n",b5.book_title,b5.book_author,b5.book_price);






    return 0;
}