# include <stdio.h>

int main()
{
    FILE* ptr=NULL;//declaring file pointer
    
    
    // char string[45]="This is another file."; //string to pass in file
    // ptr=fopen("File.txt","w"); //opens the file to write
    // fprintf(ptr, "%s", string);//to print content in file
    // fclose(ptr);// to close the file after using
    
    
    // char string[45]="This is another file's content."; //string to pass in file
    // ptr=fopen("File.txt","a"); //opens the file to write
    // fprintf(ptr, "%s", string);//to print content in file
    // fclose(ptr);// to close the file after using

    // char string[45]="This is extra added another file's content";
    // ptr=fopen("File.txt", "r+");
    // fprintf(ptr, "%s", string);
    // fclose(ptr);

    // char string[45]="This is extra added another file's content";
    // ptr=fopen("File.txt", "w+");
    // fprintf(ptr, "%s", string);
    // fclose(ptr);
    
    // char string[45]="This is extra added another file's content";
    // ptr=fopen("File.txt", "a+");
    // fprintf(ptr, "%s", string);
    // fclose(ptr);

    
    ptr=fopen("File.txt", "r");
    char c=fgetc(ptr);
    printf("The character is :%c\n", c);
    c=fgetc(ptr);
    printf("The character is :%c\n", c);

    char string[45];
    ptr=fopen("File.txt", "r");
    fgets(string, 10, ptr);
    printf("The character is :%s\n", string);
    
    ptr=fopen("File.txt", "w");
    fputc('o', ptr);

    ptr=fopen("File.txt", "w");
    fputs("This is another content", ptr);
    
    return 0;
}