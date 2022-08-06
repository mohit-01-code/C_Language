# include <stdio.h>

void swap(int arr[])
{
    for (int i = 0; i < 8/2; i++)
    {
        int temp;
        temp=arr[i];
        arr[i]=arr[7-i];
        arr[7-i]=temp;
    }
           
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    printf("Before reversing\n");
    for (int i = 0; i < 8; i++)
    {
        printf("The value element of array at index %d is %d\n", i, arr[i]);
    }
    
    swap(arr);
    for (int i = 0; i < 8; i++)
    {
        printf("The value element of array at index %d is %d\n", i, arr[i]);
    }
    
    
    return 0;
}