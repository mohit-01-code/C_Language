#include <stdio.h>
//passing array to a function and accessing the array in user defined function

int func1(int array[])
{
    for (int i = 0; i < 3; i++)
    {
        printf("The value of array at index %d is %d\n", i, *(array + i));
    }
    // array[0]=10;
    // *(array+1)=20;
    return 0;
}

int func2(int *ptr)
{
    for (int i = 0; i < 3; i++)
    {
        printf("The value of array at index %d is %d\n", i, *(ptr + i));
    }
    *ptr = 16;
    *(ptr + 1) = 19;
    return 0;
}

int func3(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("The value of element at index %d, %d is %d\n", i, j, arr[i][j]);
        }
    }

    return 0;
}

int func3_increament(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        printf("The value of index 1, %d after increament is %d\n", i, arr[0][i] + 9);
    }
    return 0;
}
int main()
{
    int arr[] = {5, 12, 13};
    printf("The value of first index of array is %d\n", arr[0]);
    printf("The value of second index of array is %d\n", arr[1]);
    func1(arr);
    // printf("The value of first index of array is %d\n", arr[0]);
    // printf("The value of second index of array is %d\n", arr[1]);

    func2(arr);
    printf("The value of first index of array is %d\n", arr[0]);
    printf("The value of second index of array is %d\n", arr[1]);

    int arr3[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    func3(arr3);
    func3_increament(arr3);
    return 0;
}