# include <stdio.h>

void call_reference(int *a)
{
    
    *a=10;
}
int main()
{
    int x=5, c;
    printf("The value of x now is %d\n", x);
    call_reference(&x);
    printf("The value of x then is %d\n", x);
    return 0;
}