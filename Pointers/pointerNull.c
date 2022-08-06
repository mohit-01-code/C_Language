# include <stdio.h>

int main()
{
    int a;
    a=5;
    int* ptr=NULL;//null pointer 
    // ptr=&a;//no longer null pointer
    if (ptr==NULL)
    {
        printf("The pointer is NULL\n");
    }
    else
    {
        printf("The pointer is :%d\n", *ptr);
    }
    
    
    return 0;
}