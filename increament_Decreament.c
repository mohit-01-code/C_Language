#include <stdio.h>

int main()
{
    
    int a = 4;
    printf("%d\n", a++); //a=4 is printed than a is increament by 1(4+1=5)
    printf("%d\n", a);   //The value after increament of a->(a=5)

    printf("%d\n", ++a); //a(5) is increament by 1 than a=6(5+1) is printed
    printf("%d\n", a);   //The value of a=6 is printed

    printf("%d\n", a--); //a=6 is printed than a is decreament by 1(6-1)
    printf("%d\n", a);   //The value after decreament of a->(a=5)

    printf("%d\n", --a); //a(5) is decreament by 1 than a=4(5-1) is printed
    printf("%d\n", a);   //The value of a=4 is printed
    return 0;
}