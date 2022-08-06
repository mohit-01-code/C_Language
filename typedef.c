#include <stdio.h>
#include <conio.h>

typedef struct student //we can also give alternative name to user_defined data_type
{
    int id;
} std; //alternative name of user_defined data_type i.e, "std"
int main()
{
    typedef int integer; //given alternative name "integer" to "int" data_type using typedef keyword
    integer a = 5;
    printf("%d\n", a);

    // int* b,c; // applying poiter only to a variable
    typedef int *pointer; // giving alternative name to int*
    pointer b, c;         // the alternative name can apply pointer to both variable
    int d = 5;
    b = &d;
    c = &d; //pointer applied to both variable and no error

    // // struct student e1;
    std e1;     //declaring alternative name of user_defiend data_type
    e1.id = 15; //accessing and using User_defined data_type by alternative name
    printf("ID of student is:%d", e1.id);
    return 0;
    getch();
}