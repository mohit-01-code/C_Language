# include <stdio.h>
#include <stdlib.h>
int* func()
{
    int c=8;
    return &c;
}
int main()
{
    //By Dealocation of memory
    int a=5,b=10;
  
    int* ptr=(int*)malloc(sizeof(int));
    ptr=&a;
    printf("The value of a is:%d\n", *ptr);
    free(ptr);//ptr is dangling pointer
    // ptr=&b;
    // printf("The value of b is:%d\n", *ptr);

    //Returning local variable in function call
    int* ptr1=func();//ptr is dangling pointer
    printf("the value of c is:%d\n", *ptr1);
    
    //Varibles going out of scope
    int* ptr2;
    {
        int d=9;
        ptr2=&d;
    }
    //ptr2 is dangling function as the scope of variable is ended
    printf("The value of d is:%d\n", *ptr2);
    return 0;
}