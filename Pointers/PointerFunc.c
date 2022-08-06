#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

void func1(int (*fptr)(int, int))
{
    printf("Hello user\n");
    printf("The sum of 2 and 2 is %d\n", fptr(2, 2));
}

void func2(int (*fptr)(int, int))
{
    printf("Hello word\n");
    printf("The sum of 10 and 2 is%d\n", fptr(10, 2));
}
int main()
{

    printf("The addition of 6 and 4 is:%d\n", sum(6, 4));
    int (*fptr)(int, int);                    //declaring funtion pointer
    fptr = sum;                               //defining function pointer by pointing it to a function
    printf("The sum of %d\n", (*fptr)(4, 3)); //executing function by function pointer
    func1(fptr);                              //Passing a function pointer to another function
    func2(fptr);                              //passing same function pointer to one more function
    return 0;
}