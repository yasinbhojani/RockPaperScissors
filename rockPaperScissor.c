#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int rockPaperScissor(char, char);
int main()
{
    char user, comp;
    int result, random;

    printf("Enter r for rock, p for paper and s for scissors : \n");
    scanf("%c", &user);

    srand(time(NULL));
    random = (rand() % 3) + 1;

    if (random == 1)
    {
        comp = 'r';
    }
    else if (random == 2)
    {
        comp = 'p';
    }
    else if (random == 3)
    {
        comp = 's';
    }

    result = rockPaperScissor(user, comp);

    printf("You chose %c and computer chose %c. ", user, comp);

    if (result == 0)
    {
        printf("Game Draw!\n");
    }
    else if (result == 1)
    {
        printf("You Win!\n");
    }
    else if (result == -1)
    {
        printf("You Loose!\n");
    }

    return 0;
}

int rockPaperScissor(char user, char comp)
{
    if (comp == user)
    {
        return 0;
    }
    if (user == 'r' && comp == 'p')
    {
        return -1;
    }
    else if (user == 'p' && comp == 'r')
    {
        return 1;
    }

    if (user == 'r' && comp == 's')
    {
        return 1;
    }
    else if (user == 's' && comp == 'r')
    {
        return -1;
    }

    if (user == 's' && comp == 'p')
    {
        return 1;
    }
    else if (user == 'p' && comp == 's')
    {
        return -1;
    }
}