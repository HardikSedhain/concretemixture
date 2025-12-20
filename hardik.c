
// #include <stdio.h>

// int main() {

//     typedef struct {
//         char name[20];
//         int id;
//         float gpa;
//     } Student;

//     Student hardik = {"hardik", 2, 3.83};

//     printf("Name: %s\n", hardik .name);
//     printf("ID: %d\n", hardik.id);
//     printf("GPA: %.2f\n", hardik.gpa);

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char name[] = "Hardik";
//     int len = strlen(name);
//     int i, j;
//     for (i = 0; i < len; i++)
//     {
//         for (j = 0; j < i; j++)
//         {
//             printf(" ");
//         }

//         for (j = i; j < len; j++)
//         {
//             {
//                 printf("%c", name[j]);
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }


// #include<stdio.h>
// #include<stdlib.h>
// struct Book
// {
//     char title[20];
//     float price;
// } book;

// int applyDiscount(struct Book *bookptr){
//     bookptr->price = bookptr->price - (bookptr->price * 0.1);
//     return 0;
// }

// int main(){
//     struct Book ptr;

//     struct Book book2 = {"math", 100};


//     printf("Enter the title of the book: ");
//     scanf("%s", ptr.title);

//     printf("Enter the price of the book: ");
//     scanf("%f", &ptr.price);

//     applyDiscount(&ptr);
//     applyDiscount(&book2);

//     printf("The discounted price of the book \"%s\" is: %.2f\n", ptr.title, ptr.price);
//     printf("The discounted price of the book \"%s\" is: %.2f\n", book2.title, book2.price);
//     return 0;
// }

// #include <stdio.h>
// #include "helpful.h"


// int main()
// {
//     Item item1 = {"Pen", 20.0};
//      printf("Price of item %s is rs.%.2f\n", item1.name, item1.price);
//     increase_price(&item1, 10.0);
//     printf("Price of item %s after increasing is rs.%.2f\n", item1.name, item1.price);
//     return 0;
// }


// #include <stdio.h>

// int main()
// {

//     FILE *fptr;
//     char name[] = "Hardik";

//     fptr = fopen("file_banyo.txt", "w");
//     if (fptr == NULL)
//     {
//         printf("Error openinig file");
//     }
//     else
//     {
//         fprintf(fptr, "hello my name is %s", name);
//         fclose(fptr);
//     }

//     return 0;
// }


#include <stdio.h>

int main()
{

    FILE *fptr;
    char buffer[100];

    fptr = fopen("file_banyo.txt", "w");
    if (fptr == NULL)
    {
        printf("Error openinig file");
    }
    else
    {
        fprintf(fptr, "hello my name is %s", name);
        fclose(fptr);
    }

    return 0;
}