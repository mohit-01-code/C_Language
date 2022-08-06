# include <stdio.h>
# include <string.h>
union student
{
    int id;
    char name[35];
    int marks;
    char fav_char;
}e1;

int main()
{
    e1.id=1;
    printf("The ID of student is:%d\n", e1.id);
    e1.marks=45;
    printf("The marks of student is:%d\n", e1.marks);
    e1.fav_char='p';
    printf("The fav_char of student is:%c\n", e1.fav_char);
    strcpy(e1.name, "Mohit");
    printf("The name of student is:%s\n", e1.name);
    return 0;
}