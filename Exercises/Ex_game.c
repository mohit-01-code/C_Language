#include <stdio.h>
#include <time.h>
#include <stdlib.h>
# include <conio.h>
void choice_1(int choice1)
{
    if (choice1 == 1)
    {
        char rock[] = "Rock";
        printf("You chose: %s\n", rock);
    }
    else if (choice1 == 2)
    {
        char paper[] = "Paper";
        printf("You chose: %s\n", paper);
    }
    else if (choice1 == 3)
    {
        char scissor[] = "Scissor";
        printf("You chose: %s\n", scissor);
    }
}
void choice_2(int choice2)
{
    if (choice2 == 1)
    {
        char rock[] = "Rock";
        printf("Player 2 chose : %s\n", rock);
    }
    else if (choice2 == 2)
    {
        char paper[] = "Paper";
        printf("Player 2 chose : %s\n", paper);
    }
    else if (choice2 == 3)
    {
        char scissor[] = "Scissor";
        printf("Player 2 chose : %s\n", scissor);
    }
}
int main()
{
    label:
    system("cls");
    int round, choice1, choice2, point1 = 0, point2 = 0, replay;
    char player_1[15];
    printf("\n                  Enter your name as Player 1: ");
    scanf("%s", player_1);

    printf("\n                  Player 2 is computer.\n\n");
    getchar();
    printf("\n      How many rounds you want to play : ");
    scanf("%d", &round);
    for (int i = 1; i <= round; i++)
    {
        
        printf("\n**Round %d**", i);
        printf("\n              %s's Turn", player_1);
        printf("\n\n                  Press 1 to choose Rock.Press 2 for Paper.Press 3 for Scissor.\n");
        scanf("%d", &choice1);
        choice_1(choice1);
        srand(time(NULL));
        choice2 = 1 + rand() % 2;
        choice_2(choice2);
        if (choice1 == choice2)
        {
            printf("\nTie!!..0 points to both players\n");
            printf("Round %d Points:", i);
            printf("\n      %s : 0 \n", player_1);
            printf("    Player 2 : 0 \n");
        }
        else if (choice1 == 1 && choice2 == 2)
        {
            printf("\nplayer 2 got 1 point.\n");
            point2++;
            printf("Round %d Points:", i);
            printf("\n      %s : %d \n", player_1, point1);
            printf("    Player 2 : %d \n", point2);
        }
        else if (choice1 == 3 && choice2 == 2)
        {
            printf("\n%s got 1 point.\n", player_1);
            point1++;
            printf("Round %d Points:", i);
            printf("\n      %s : %d \n", player_1, point1);
            printf("    Player 2 : %d \n", point2);
        }
        else if (choice1 == 2 && choice2 == 1)
        {
            printf("\n%s got 1 point.\n", player_1);
            point1++;
            printf("Round %d Points:", i);
            printf("\n      %s : %d \n", player_1, point1);
            printf("    Player 2 : %d \n", point2);
        }
        else if (choice1 == 3 && choice2 == 1)
        {
            printf("\n player 2 got 1 point.\n");
            point2++;
            printf("Round %d Points:", i);
            printf("\n      %s : %d \n", player_1, point1);
            printf("    Player 2 : %d \n", point2);
        }
        else if (choice1 == 1 && choice2 == 3)
        {
            printf("\n%s got 1 point.\n", player_1);
            point1++;
            printf("Round %d Points:", i);
            printf("\n      %s : %d \n", player_1, point1);
            printf("    Player 2 : %d \n", point2);
        }
        else if (choice1 == 2 && choice2 == 3)
        {
            printf("\nplayer 2 got 1 point.\n");
            point2++;
            printf("Round %d Points:", i);
            printf("\n      %s : %d \n", player_1, point1);
            printf("    Player 2 : %d \n", point2);
        }
    }
    printf("\n\nGAME OVER\n\n");
    printf("Final Points:");
    printf("\n      %s : %d \n", player_1, point1);
    printf("    Player 2 : %d \n", point2);
    if (point1 == point2)
    {
        printf("\n\n                The Game is Tie\n");
    }
    else if (point1 > point2)
    {
        printf("\n\n                The Winner is %s\n", player_1);
    }
    else if (point1 < point2)
    {
        printf("\n\n                The winner is Player 2\n");
    }
    int over;
    printf("Press 1 to play again else press q to exit");
    scanf("%d", &over);
    getchar();
    if (over==1)
    {
        goto label; 
    }
    else
    {
        goto end;
    }
    
    
    getch();
    end:
    return 0;
}