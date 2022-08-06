# include <stdio.h>
# include <string.h>
int main()
{
    char tag[10], h[50];
    printf("Enter tag: \n");
    gets(tag);
    printf("Enter your content according to tag: \n");
    gets(h);
    printf("Your HTML Parser is: \n<%s>%s</%s>\n", tag, h, tag);
    
    printf("Output of this parser is:\n%s\n", h);
    return 0;
}