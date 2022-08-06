#include <stdio.h>

int fab_recursive(int num)                  
{
    if (num == 1)
    {
        return 0;
    }
    else if (num == 2)
    {
        return 1;
    }
    else
    {
        return fab_recursive(num - 1) + fab_recursive(num - 2);
    }
}

int fab_iterative(int num)
{
    int a=0;
    int b=1;
    for (int i = 0; i < num-1; i++)
    {
        b=a+b;
        a=b-a;
         
    }
    return a;
}
int main()
{
    int fab;
    printf("Enter number: \n");
    scanf("%d", &fab);
    printf("fibonacci number of %d is %d\n", fab, fab_iterative(fab));
    printf("fibonacci number of %d is %d\n", fab, fab_recursive(fab));
    return 0;
}
