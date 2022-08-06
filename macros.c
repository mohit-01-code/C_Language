#include <stdio.h>
#define PI 3.14
#define SQUARE(X) X *X

int main()
{
    printf("hii...\n");
    int radius = 7;
    printf("Area of circle is%f\n", PI*SQUARE(radius));
    //predefined macros
    printf("%s\n", __DATE__);
    printf("%s\n", __TIME__);
    printf("%s\n", __FILE__);
    printf("%d\n", __LINE__);
    printf("%d\n", __STDC__);
    
    return 0;
}