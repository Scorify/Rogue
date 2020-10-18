#include "rogue.h"

int main ()
{
    Player * user;
    int ch;
    Position * newPosition;

    Level * level;

    screenSetUp();

    level = createLevel(1);

    user = playerSetUp();

    /* main game loop stuff */
    while ((ch = getch()) != 'q')
    {
        newPosition = handleInput(ch, user);
        checkPosition(newPosition, user, level->tiles);
    }
    endwin();
    
    return 0;
}

// Screen
int screenSetUp()
{
    initscr();
    printw("Hello world!");
    noecho();
    refresh();

    srand(time(NULL));

    return 1;

}

