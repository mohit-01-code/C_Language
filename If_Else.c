# include <stdio.h>

int main()
{
    int a;
    printf("Enter the value of a : ");
    scanf("%d", &a);
    if (a>10)
    {
        printf("a is greater than 10\n");
    }
    else if(a>20)
    {
        printf("a is greater than 20\n");
    }
    else if(a>30)
    {
        printf("a is greater than 30\n");
    }
    else
    {
        printf("a is less than 10.\n");
    }
    
    
    return 0;
}