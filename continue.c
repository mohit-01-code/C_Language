# include <stdio.h>

int main()
{
    int age;
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n Enter your age: ",i);
        scanf("%d", &age);
        if (age>10)
        {
            continue;
        }
        printf("We have not come across any continue statement");
        
    }
    
    return 0;
}
