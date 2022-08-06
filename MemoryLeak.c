#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr = NULL;
    for (int i = 0; i < 50000; i++)
    {
        ptr = malloc(8192 * sizeof(int));
        printf("Hello user your memory is using\n");
        if (i % 100 == 0)
        {
            getchar();
        }
        free(ptr); //without this the encounter of memory leak will take place
    }

    return 0;
}