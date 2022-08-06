#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("The value of argc is %d\n", argc); //Initially number of agrguments i.e, The file itself
    for (int i = 0; i < argc; i++)
    {
        printf("This argument at index number %d has value of %s\n", i, argv[i]);
    }
    //Pass Command Line argument by .\.exe hii harry -- 2 arguments passed + 1 default argument i.e, the file itself.

    return 0;
}
