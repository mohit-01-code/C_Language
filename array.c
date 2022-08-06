# include <stdio.h>

int main()
{
    /* int marks[10];
       for (int i = 1; i < 10; i++)
       {
           printf("Enter value  of %d element of array: \n", i);
           scanf("%d", &marks[i]);
       }
       for (int i = 1; i < 10; i++)
       {
           printf("The value of %d element is %d\n", i, marks[i]);
       }*/
           
    
    /* int marks[]={42,23,30,5,12,67,90};
     for (int i = 0; i < 7; i++)
     {
         printf("The value of %d element is %d \n", i, marks[i]);
     }*/
    
    int marks[3][3]={{45,23,12},{34,1,21},{21,4,17}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", marks[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}
