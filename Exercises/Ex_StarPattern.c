#include <stdio.h>

void print_star(int n)
{
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void reverse_print_star(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int row, type;
    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter 0 for print_star and enter 1 for reverse_print_star: ");
    scanf("%d", &type);

    switch (type)
    {
    case 0:
        print_star(row);    
        break;
    case 1:
        reverse_print_star(row);    
        break;
    default:
        printf("Please enter valid input");
        break;
    }
    return 0;
}