/*
 * Take exercise structures_functions_00.
 * Create an additional structure: Author. This should store Given name and Surname of the author.
 * Rewrite the previous exercise to work with this new structure.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
    char firstname[10];
    char lastname[10];
} author_s;
typedef struct{
    char title[20];
    author_s author;
    int year;
} book_s;
int size = 0;
int position = 0;

void book_adder(book_s *book, int pos);
void menu();
void book_printer(book_s book[]);
void book_deleter(book_s *book);
void change_first(book_s *book);
void change_last(book_s *book);
void change_year(book_s *book);



void main()
{
    system("clear");

    book_s book[20];

    menu();
    char cmd[50];


    while(1){
        printf("type command: ");
        gets(cmd);

        if(strcmp(cmd, "ad") == 0)
            book_adder(book, position);
        else if(strcmp(cmd, "li") == 0)
            book_printer(book);
        else if(strcmp(cmd, "de") == 0)
            book_deleter(book);
        else if(strcmp(cmd, "fi") == 0)
            change_first(book);
        else if(strcmp(cmd, "la") == 0)
            change_last(book);
        else if(strcmp(cmd, "ye") == 0)
            change_year(book);
        else
            printf("not valid command\n");

    }

}

void book_adder(book_s *book, int pos)
{   puts("title:");
    gets(book[pos].title);
    puts("authors first name:");
    gets(book[pos].author.firstname);
    puts("authors last name:");
    gets(book[pos].author.lastname);
    puts("year:");
    scanf("%d", &book[pos].year);
    getchar();
    position++;
}
void menu()
{
    printf( "======== BOOK CENTER ========\n"
           "TYPE 'ad' to add a new book\n"
           "TYPE 'de' to delete a book\n"
           "TYPE 'fi' to change a first name\n"
           "TYPE 'la' to change a last name\n"
           "TYPE 'ye' to change a book year\n");
}

void book_printer(book_s book[])
{
    for(int i = 0; i < position; i++)
        printf("%d - %s - %s %s, %d\n", i + 1, book[i].title, book[i].author.firstname,book[i].author.lastname ,book[i].year);
}
void book_deleter(book_s *book)
{   int pos = 0;
    puts("which position to delete?");
    scanf("%d", &pos);
    getchar();
    for(int i = pos - 1; i <position; i ++){
        strcpy(book[i].title, book[i + 1].title);
        strcpy(book[i].author.firstname, book[i + 1].author.firstname);
        strcpy(book[i].author.lastname, book[i + 1].author.lastname);

        book[i].year = book[i + 1].year;
    }
    position--;
}
void change_first(book_s *book){
    int pos = 0;
    char new_first[10];
    puts("which positions first name you want to change?");
    scanf("%d", &pos);
    getchar();
    printf("Current first name is: %s\nWhat will be the new name?\n", book[pos-1].author.firstname);
    gets(new_first);
    strcpy(book[pos-1].author.firstname, new_first);
    printf("change completed\n");
}
void change_last(book_s *book){
    int pos = 0;
    char new_first[10];
    puts("which positions last name you want to change?");
    scanf("%d", &pos);
    getchar();
    printf("Current last name is: %s\nWhat will be the new name?\n", book[pos-1].author.lastname);
    gets(new_first);
    strcpy(book[pos-1].author.lastname, new_first);
    printf("change completed\n");
}
void change_year(book_s *book){
    int pos = 0;

    puts("which positions year you want to change?");
    scanf("%d", &pos);
    getchar();
    int *new_year = &book[pos-1].year;
    printf("Current year is: %d\nWhat will be the new year?\n", book[pos-1].year);
    scanf("%d", new_year);
    getchar();
    printf("change completed\n");
}
