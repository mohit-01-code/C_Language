# include <stdio.h>

int main()
{
    int maths,science;
    printf("Enter marks obtain in Maths: \n");
    scanf("%d",&maths);
    printf("Enter marks obtain in Science: \n");
    scanf("%d",&science);
    if(maths>=33&&science>=33)
    {
        printf("Congratulations! You are passed in both exams.\n You won gift of 45 rupees\n");
    }
    else if(science>=33)
    {
        printf("You are passed in science exam.\n You won gift of 15 rupees\n");
    }
    else if(maths>=33)
    {
        printf("you are passed in Maths exam.\n You won gift of 15 rupees\n");
    }
    else
    {
        printf("You are failed in both exams!\n");
    }
    return 0;
}