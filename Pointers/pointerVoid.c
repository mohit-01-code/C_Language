# include <stdio.h>
# include <stdlib.h>
int main()
{
    int a;
    a=5;
    void* ptr=&a;
    printf("Address of a is:%d\n", ptr); 
    // printf("The value of a is:%d\n", *ptr);//void pointer cant be derefence directly
    printf("The value of a is:%d\n", (*(int*)ptr));//by casting method void pointer can derefermce
    return 0;
}