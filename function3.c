# include <stdio.h>
//With argument and with return value

int mohit(int a, int b);

int main()
{
    int c;
    c=mohit(2, 3);      //With argument
    printf("%d", c);   
    return 0;
}

int mohit(int a, int b)
{
    return a+b;   //With return value
}