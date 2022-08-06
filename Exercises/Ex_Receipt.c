#include <stdio.h>
#include <string.h>
#include <stdlib.h>
# include <time.h>
char *replaceWord(const char *str, char *oldword, const char *newword)
{
    int i, count = 0;
    char *resultstring;
    int oldwordlength = strlen(oldword);
    int newwordlength = strlen(newword);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (strstr(str, oldword) == str)
        {
            count++;
            i = i + oldwordlength;
        }
    }
    resultstring = (char *)malloc(i + count * (newwordlength - oldwordlength) + 100);
    i = 0;
    while (*str != '\0')
    {
        if (strstr(str, oldword) == str)
        {
            strcpy(&resultstring[i], newword);
            i += newwordlength;
            str += oldwordlength;
        }
        else
        {
            resultstring[i] = *str;
            i++;
            str++;
        }
    }
    resultstring[i] = '\0';
    return resultstring;
    free(resultstring);
}
int main()
{
    char *name = (char *)malloc(60 * sizeof(char));
    char *item = (char *)malloc(60 * sizeof(char));
    char *outlet = (char *)malloc(60 * sizeof(char));
    char *pay_mode=(char *)malloc(60*sizeof(char));
    char *cost=(char *)malloc(60*sizeof(char));

    printf("Enter the Name of customer : ");
    gets(name);
    printf("Enter the Item purchased : ");
    gets(item);
    printf("Enter prize of item purchased : ");
    gets(cost);
    printf("Enter payment method : ");
    gets(pay_mode);
    printf("Enter your outlet's name : ");
    gets(outlet);
    FILE *fptr = NULL;
    FILE *fptr2 = NULL;
    fptr = fopen("Bill.txt", "r");
    fptr2 = fopen("genBill.txt", "w");
    char str[300];
    fgets(str, 300, fptr);
    printf("The old bill generated was : %s\n", str);

    char *newstr;
    newstr = replaceWord(str, "{{Name}}", name);
    newstr = replaceWord(newstr, "{{item}}", item);
    newstr = replaceWord(newstr, "{{outlet}}", outlet);
    newstr = replaceWord(newstr, "{{cost}}", cost);
    newstr = replaceWord(newstr, "{{pay.mode}}", pay_mode);
    newstr = replaceWord(newstr, "{{Time}}", __TIME__);
    newstr = replaceWord(newstr, "{{Date}}", __DATE__);
    fprintf(fptr2, "%s", newstr);
    printf("The new bill generated is : %s\n", newstr);
    free(name);
    free(item);
    free(cost);
    free(pay_mode);
    free(outlet);
    return 0;
}