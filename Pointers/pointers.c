# include <stdio.h>

int main()
{
    int a=5;
    int *ptra=&a;
    int *ptr2=NULL;
    printf("The address of pointer to a is %d\n", &ptra);
    printf("The address of variable a is %d\n", &a);
    printf("The value of some garbage is %d\n", ptr2);
    printf("The value of a is %d\n", *ptra);
    printf("The value of variable a is %d\n", a);
    
    printf("The address of pointer to a after increament of index is %d\n", &ptra+1);
    printf("The address of a after increament of index is %d\n", ptra+1);

    return 0;
}