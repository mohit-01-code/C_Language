# include <stdio.h>

void print_str(char str[])
{
    int i=0;
    while (str[i]!='\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
    
}

void print_str1(char str1[])
{
    for (int j = 0; j < 6; j++)
    {
        printf("%c", str1[j]);
    }
    printf("\n");
}
int main()
{
    char str[]={'h','a','r','r','y'};
    char str1[]={"harry"};
    char str3[50];
    print_str(str);
    print_str1(str1);
    printf("Enter your string: ");
    gets(str3);
    printf("by printf: %s\n", str3);
    printf("By puts: ");
    puts(str3);
    return 0;
}