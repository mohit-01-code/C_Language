#include <stdio.h>

int reverse(int num, int reversed)
{
    while (num != 0)
    {
        reversed = reversed * 10 + num % 10;
        num = num / 10;
    }
    return reversed;
}
int main()
{
    int num, reversed = 0;
    printf("Enter a number to check wheather it is palidrome or not.\n");
    scanf("%d", &num);
    if (num == reverse(num, reversed))
    {
        printf("The number you have entered is palidrome.\n");
        printf("The Palidrome of the number you entered is %d..ie., same as number you entered\n", reverse(num, reversed));
    }
    else
    {
        printf("The number you have entered is not palidrome.\n");
        printf("Since the reverse number of a number you have entered is %d .\nThey are not same.\n\n", reverse(num, reversed));
    }

    return 0;
}