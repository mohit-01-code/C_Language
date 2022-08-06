# include <stdio.h>

void call_reference(int *x, int *y)
{
    int a1;
    *x=*x+*y;           //Value of x is changed
    a1=*x-*y;           //reconverting the value x to its actual value
    *y=a1-*y;           //subtracting y from actual value of x
    
}
int main()
{
    int a=7, b=2;
    printf("The value of a and b before\na=%d\nb=%d\n", a,b);
    call_reference(&a, &b);
    printf("The value of a and b before\na=%d\nb=%d\n", a,b);
    return 0;
}