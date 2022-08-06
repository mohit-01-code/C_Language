#include<stdio.h>
//for loop
int main()
{
    int i , j , n;
    printf("Enter a number\n");
    scanf("%d",&n);
    for (i=n-10, j=n-10; j<n, i < n; i++, j++)
    {

        printf("%d %d\n",i,j);
        
    }
    
    return 0;
}
