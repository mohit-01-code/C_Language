#include <stdio.h>
#include "extern.c"
//Storage class

int c = 10; //External variable
void func()
{
    //printf("The value of a in main() function:%d\n", a); //no scope of int a/auto int a outside its main function it will throw error
    printf("The value of external c in function:%d\n", c); //scope of External/global variable is entire program
}
void stat()
{
    static int a = 10; //declaring static variable
    a++;
    printf("The value of static variable:%d\n", a);
}

int main()
{
    int a;                                                             //by default this is automatic variable as it has no specification for storage class
    auto int b = 5;                                                    //declaring and defining automatic storage class
    printf("The default garbage value of automatic variable:%d\n", a); //as it is automatic variable it will give garbage value as deafult intialization
    printf("The value of automatic variable:%d\n", b);
    func();
    c = 5;
    printf("The precedence of automatic and external varibale C : %d\n", c); //precedence of automatic and gloabal variable
    printf("The value of e in another file:%d\n", e);                        //printing value from another file i.e, extern.c without declaring in main file
    e = 45;                                                                  //changing the value of variable in another file
    printf("The changed value of e : %d\n", e);                              //printing the changed value of variable in another file
    stat();
    stat(); //calling same function having static variable
    stat();
    stat();
    stat();
    return 0;
}