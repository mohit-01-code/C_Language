#include <stdio.h>
#include <string.h>

struct data //declaring user_defined data_type
{
    char name[35];
    int lic_no[35];
    char route[35];
    int kms[35];
    // } e1, e2, e3, e4; //declaring global variables of structure
} e[4];

void d() //function to take input from driver 1
{
    for (int i = 0; i < 4; i++)
    {
        printf("\nDriver %d\n", i + 1);
        printf("Enter your Name : ");
        scanf("%s", e[i].name); //Accessing global variables and members of structure
        printf("Enter your Driving License Number : ");
        scanf("%s", e[i].lic_no); //Accessing global variables and members of structure
        printf("Enter your route : ");
        scanf("%s", e[i].route); //Accessing global variables and members of structure
        printf("Enter your Kilometers : ");
        scanf("%s", e[i].kms); //Accessing global variables and members of structure
    }
    printf("\n");
}

void detail()
{
    for (int j = 0; j < 4; j++)
    {
        printf("Details of driver %d:\n", j + 1);
        printf("Name : %s\n", e[j].name);
        printf("Driving License No. : %s\n", e[j].lic_no);
        printf("Route : %s\n", e[j].route);
        printf("Kilometers : %s\n", e[j].kms);
        printf("\n");
    }
}

// void d1()         //function to take input from driver 1
// {
//     printf("\nDriver 1\n");
//     printf("Enter your Name : ");
//     scanf("%s", e1.name); //Accessing global variables and members of structure
//     printf("Enter your Driving License Number : ");
//     scanf("%s", e1.lic_no); //Accessing global variables and members of structure
//     printf("Enter your route : ");
//     scanf("%s", e1.route); //Accessing global variables and members of structure
//     printf("Enter your Kilometers : ");
//     scanf("%s", e1.kms); //Accessing global variables and members of structure
// }
// void d2() //function to take input from driver 2
// {
//     printf("\nDriver 2\n");
//     printf("Enter your Name : ");
//     scanf("%s", e2.name);
//     printf("Enter your Driving License Number : ");
//     scanf("%s", e2.lic_no);
//     printf("Enter your route : ");
//     scanf("%s", e2.route);
//     printf("Enter your Kilometers : ");
//     scanf("%s", e2.kms);
// }
// void d3()
// {
//     printf("\nDriver 3\n");
//     printf("Enter your Name : ");
//     scanf("%s", e3.name);
//     printf("Enter your Driving License Number : ");
//     scanf("%s", e3.lic_no);
//     printf("Enter your route : ");
//     scanf("%s", e3.route);
//     printf("Enter your Kilometers : ");
//     scanf("%s", e3.kms);
// }
// void d4()
// {
//     printf("\nDriver 4\n");
//     printf("Enter your Name : ");
//     scanf("%s", e4.name);
//     printf("Enter your Driving License Number : ");
//     scanf("%s", e4.lic_no);
//     printf("Enter your route : ");
//     scanf("%s", e4.route);
//     printf("Enter your Kilometers : ");
//     scanf("%s", e4.kms);
// }
// void prnt_data() //Function to print data of all drivers
// {
//     printf("Details of driver 1:\n");
//     printf("Name : %s\n", e1.name);
//     printf("Driving License No. : %s\n", e1.lic_no);
//     printf("Route : %s\n", e1.route);
//     printf("Kilometers : %s\n\n", e1.kms);
//     printf("Details of driver 2:\n");
//     printf("Name : %s\n", e2.name);
//     printf("Driving License No. : %s\n", e2.lic_no);
//     printf("Route : %s\n", e2.route);
//     printf("Kilometers : %s\n\n", e2.kms);
//     printf("Details of driver 3:\n");
//     printf("Name : %s\n", e3.name);
//     printf("Driving License No. : %s\n", e3.lic_no);
//     printf("Route : %s\n", e3.route);
//     printf("Kilometers : %s\n\n", e3.kms);
//     printf("Details of driver 4:\n");
//     printf("Name : %s\n", e4.name);
//     printf("Driving License No. : %s\n", e4.lic_no);
//     printf("Route : %s\n", e4.route);
//     printf("Kilometers : %s\n", e4.kms);
// }
int main()
{
    d();
    detail();
    // d1();
    // d2();
    // d3();
    // d4();
    // prnt_data();
    return 0;
}