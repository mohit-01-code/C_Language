#include <stdio.h>
#include <stdlib.h>
//Dynamic Memory Allocation

void malloc1(int *mem, int n) //Accesing and using allocated memory
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of array at index %d:", i); //storing data in allocated memory
        scanf("%d", &mem[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value of array at index %d is:%d\n", i, mem[i]); //accesing and printing data from allocated memory
    }
}   

void calloc1(int *mem, int n) //accesing and using contiguous memory
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of array at index %d:", i); //storing data in contiguous allocated memory
        scanf("%d", &mem[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value of array at index %d is:%d\n", i, mem[i]); //Accesing and printing data from contiguous allocated memory
    }
}
void realloc1(int *mem, int n) //Accessing and using reallocated memory
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of array at index %d:", i); //storing data in reallocated memory
        scanf("%d", &mem[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value of array at index %d is:%d\n", i, mem[i]); //printing data from reallocated memory
    }
}

int main()
{
    //Using malloc function
    int n;
    int *mem; //declaring pointer to point storage of dynamic allocated memory
    printf("Enter the size of array: ");
    scanf("%d", &n);
    mem = (int *)malloc(n * sizeof(int)); //taking storage using malloc() function and casting it from void to int* and pointing it to "mem"
    malloc1(mem, n);                      //calling function and passing memory via pointer to function i.e,"malloc1"

    //Using calloc function
    printf("Enter the size of array: ");
    scanf("%d", &n);
    mem = (int *)calloc(n, sizeof(int));
    calloc1(mem, n);

    //Using realloc function
    mem = (int *)realloc(mem, (n + 3) * sizeof(int)); //reallocating memory by increasing 3 blocks of int
    realloc1(mem, n + 3);

    return 0;
}