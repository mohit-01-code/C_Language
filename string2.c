#include <stdio.h>
#include <string.h>

int main()
{
    char str1[30], str2[30];
    printf("Enter string 1: \n");
    gets(str1);
    printf("Enter string 1: \n");
    gets(str2);
    printf("Length of string 1 is:%d \n", strlen(str1));                //length of str1
    printf("Length of string 2 is:%d \n", strlen(str2));                //length of str2
    printf("Comparison of str1 and str2 is:%d \n", strcmp(str1, str2)); //compares str1 to str2
    printf("Comparison of str2 and str1 is:%d \n", strcmp(str2, str1)); //compares str2 to str1
    printf("By puts - Str1 reversed and then re-reversed to as it is: \n");
    puts(strrev(str1)); //reversed str1
    puts(strrev(str1)); //re-reversed str1
    printf("By printf - Str1 reversed and then re-reversed to as it is:\n%s\n%s \n", strrev(str1), strrev(str1));
    printf("By puts - String after combining str2 to str1: \n");
    puts(strcat(str1, str2)); //combines/concatenate str2 with str1
    printf("By printf - String after combining str2 to str1:\n%s \n", strcat(str1, str2));

    printf("By puts - String after copying str2 to str1: \n");
    puts(strcpy(str1, str2)); //copies str2 to str1
    printf("By printf - String after copying str2 to str1:\n%s \n", strcpy(str1, str2));

    return 0;
}