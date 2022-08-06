# include <stdio.h>
//Without argument and with return value
int mohit()
{
    int a,b;
    printf("Enter value of a and b\n");
    scanf("%d%d", &a,&b);
    return a+b;    //Return value
}
int main()
{
    int c;
    c=mohit(/*Without argument*/);   
    printf("%d", c);
    return 0;
}
