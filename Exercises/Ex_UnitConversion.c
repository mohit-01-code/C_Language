# include <stdio.h>

int main()
{
    int n, kms, inches, cms, pound;
    printf("1. kms to miles.\n2. inches to foot.\n3. cms to inches.\n4. pound to kgs.\n5. inches to meters \n");
    printf("Please select number for respective conversion: \n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("Enter kms: ");
        scanf("%d", &kms);
        printf("%d kms = %.3f miles", kms, kms*0.621);
        break;
    case 2:
        printf("Enter inches: ");
        scanf("%d", &inches);
        printf("%d inches = %.4f foot", inches, inches*0.0833);
        break;
    case 3:
        printf("Enter cms: ");
        scanf("%d", &cms);
        printf("%d cms = %.3f inches", cms, cms*0.394);
        break;
    case 4:
        printf("Enter pound: ");
        scanf("%d", &pound);
        printf("%d pound = %.3f kgs", pound, pound*0.454);
        break;
    case 5:
        printf("Enter inches: ");
        scanf("%d", &inches);
        printf("%d inches = %.4f meters", inches, inches*0.0254);
        break;    
    default:
        printf("\a !Please Enter number between 1-5");
        break;
    }
    return 0;
}
