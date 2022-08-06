# include <stdio.h>
//Without argument without return value

void mohit()                //Without return value
{
    int n;
    printf("Enter a number \n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
    
}

void main()
{
    mohit();            //Without argument
 
}