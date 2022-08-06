# include <stdio.h>

int main()
{
    int moh[]={56,2,3,4,5,67};
    int *arrayptr=moh;
    printf("The address of first element is %d\n", &moh[0]);
    printf("The address of first element is %d\n", moh);
    printf("The value of first element is %d\n", *moh);
    printf("The address of pointer to first element is %d\n\n", &arrayptr);

    printf("The address of second element of array is %d\n", &moh[1]);
    printf("The address of second element of array is %d\n", moh+1);
    printf("The value of second element after increament of array is %d\n", *moh+1);
    printf("The value of second element of array is %d\n", moh[1]);
    printf("The address of pointer to second element of array is %d\n", &arrayptr+1);
    return 0;
}