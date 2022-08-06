# include <stdio.h>
# include <string.h>

int main()
{
    char str1[50], str2[50], str3[]={" is a friend of "};
    printf("Enter string 1: ");
    gets(str1); //takes string 1 from user
    printf("Enter string 2: ");
    gets(str2); //takes string 2 from user
    strcat(str1, str3); //combines string 3 to string 1 i.e, string 1 is a friend
    puts(strcat(str1, str2)); //combines str2 with earlier combined (str1 and str3) i.e, str1 is a friend of str2 
    return 0;
}