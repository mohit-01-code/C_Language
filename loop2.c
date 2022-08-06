# include <stdio.h>
//while loop
int main()
{
    int n,i=1;
    printf("Enter a number: \n");
    scanf("%d",&n);
    while (i<n)
    {
        printf("%d\n",i);
        i=i+1;
    }
    
    return 0;
}
