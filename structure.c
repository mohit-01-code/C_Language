#include <stdio.h>
#include <string.h>
struct student // defined a user_defined data_type having name "student" using struct keyword
{
    int id;    //different type of data_type is included in user_defined data_type
    int marks; // More than one data_type is included
    char fav_char;
    char name[35];
}; //e1,e2,e3; //Variables of user_defined data_type can also be declared here
//struct student e1,e2,e3; //global variables and data_types and can be accessed anywhere in any function
int main()
{
    struct student e1, e2, e3; //declaring user_defined data_type
    e1.id = 1;                 //accesing variable of data_types inside the user_defined data_type
    e2.id = 2;
    e3.id = 3;
    e1.marks = 45;
    e2.marks = 70;
    e3.marks = 85;
    e1.fav_char = 'm';
    e2.fav_char = 'n';
    e3.fav_char = 'o';
    printf("The ID of e1 student is: %d\n", e1.id);
    printf("The ID of e2 student is: %d\n", e2.id);
    printf("The ID of e3 student is: %d\n", e3.id);

    printf("The marks of ID-%d is: %d\n", e1.id, e1.marks);
    printf("The marks of ID-%d is: %d\n", e2.id, e2.marks);
    printf("The marks of ID-%d is: %d\n", e3.id, e3.marks);

    printf("The favourite charater of student having ID-%d of marks %d is: %c\n", e1.id, e1.marks, e1.fav_char);
    printf("The favourite charater of student having ID-%d of marks %d is: %c\n", e2.id, e2.marks, e2.fav_char);
    printf("The favourite charater of student having ID-%d of marks %d is: %c\n", e3.id, e3.marks, e3.fav_char);

    strcpy(e1.name, "Mohit"); //accesing and usind data_types by string
    strcpy(e2.name, "Harry");
    strcpy(e3.name, "Ravi");

    printf("The name of student having ID-%d is %s\n", e1.id, e1.name);
    printf("The name of student having ID-%d is %s\n", e2.id, e2.name);
    printf("The name of student having ID-%d is %s\n", e3.id, e3.name);
    return 0;
}