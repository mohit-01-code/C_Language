#include <stdio.h>
int factorial(int num)
{

    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return (num * factorial(num - 1));
    }
}

int main()
{
    int number;
    printf("Enter number: \n");
    scanf("%d", &number);
    printf("The factorial of %d is %d", number, factorial(number));
    return 0;
}
