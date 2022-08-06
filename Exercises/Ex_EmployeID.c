#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n;
    char *ptr;
    printf("\nEmployee 1:\n");
    printf("Enter the number of character in your E.id:");
    scanf("%d", &n);
    ptr = (char *)malloc(n * sizeof(char));
    printf("Enter your E.id : ");
    scanf("%s", &ptr[0]);
    printf("E.id for employee 1 is: %s\n", ptr);

    printf("Employee 2:\n");
    printf("Enter the number of character in your E.id:");
    scanf("%d", &n);
    ptr = (char *)realloc(ptr, n * sizeof(char));
    printf("Enter your E.id : ");
    scanf("%s", &ptr[1]);
    printf("E.id for employee 2 is: %s\n", ptr + 1);

    printf("Employee 3:\n");
    printf("Enter the number of character in your E.id:");
    scanf("%d", &n);
    ptr = (char *)realloc(ptr, n * sizeof(char));
    printf("Enter your E.id : ");
    scanf("%s", &ptr[2]);
    printf("E.id for employee 3 is: %s\n", ptr + 2);

    // for (int i = 0; i < 3; i++)
    // {
    //     if (i = 0)
    //     {
    //         printf("Employee %d:\n",i+1);
    //         printf("Enter the number of character in your E.id:");
    //         scanf("%d", &n);
    //         ptr = (char *)malloc(n * sizeof(char));
    //         printf("Enter your E.id : ");
    //         scanf("%s", &ptr[i]);
    //         printf("E.id for employee %d is: %s\n",i+1, ptr + i);
    //     }
    //     else
    //     {
    //         continue;
    //     }
    //     printf("Employee %d:\n", i+1);
    //     printf("Enter the number of character in your E.id:");
    //     scanf("%d", &n);
    //     ptr = (char *)realloc(ptr, n * sizeof(char));
    //     printf("Enter your E.id : ");
    //     scanf("%s", &ptr[i]);
    //     printf("E.id for employee i is: %s\n",i+1, ptr + i);
    // }

    return 0;
}