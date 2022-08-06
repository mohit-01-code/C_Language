# include <stdio.h>
//With argument without return value

void mohit(int n)
{
    for (int i = 1; i < n; i++)
    {
        printf("%c\n", '*');   //without return value
    }
    
}

int main()
{
    mohit(5);    //With argument
    return 0;
}