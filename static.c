#include <stdio.h>
int b = 4; //declaring global variable
int loc_var()
{
    printf("The value of b globally is:%d\n", b); //accesing global variable in specific function
    printf("The address of b globally is:%d\n", &b);
}
int var()
{
    int a = 5; //declaring normal variable
    a++;
    printf("The value of normal variable is: %d\n", a);
}
int stat_var()
{
    static int a = 5; //declaring static variable
    a++;
    printf("The value of static variable is: %d\n", a);
}
int main()
{
    int b = 34;
    printf("The value of b in main() function is:%d\n", b); //Will take first local variable as precedence
    printf("The address of b in main() function is:%d\n", &b);
    loc_var();
    var(); //calling function having normal variable
    var();
    var();
    stat_var(); //calling function having static variable
    stat_var();
    stat_var();
    return 0;
}