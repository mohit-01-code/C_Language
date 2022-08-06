# include <stdio.h>

int main()
{
    int a;
    a=5;
    int* ptr;//ptr is wild pointer
    printf("The default status of wild pointer:%d\n", *ptr);
    ptr=&a;
    printf("The derefernced value of ptr is:%d\n", *ptr);
    return 0;
}