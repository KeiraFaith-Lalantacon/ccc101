
#include <stdio.h>
#include <string.h>
#include <windows.h>

#define RIGHT 130 
#define BOTTOM 43

void gotoxy(int x, int y) {
    COORD c = { x, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

int main() {
    char name[] = "Keira Lalantacon";
    int x, y;

    system("cls");

    // Move your name across the top
    for (x = 0; x <= RIGHT - strlen(name); x++) {
        system ("cls");
        gotoxy(x, 0);
        printf("%s", name);
        Sleep(10);
    }

    // Move your name down the right side
    for (y = 1; y <= BOTTOM; y++) {
        system ("cls");
        gotoxy(RIGHT - strlen(name), y);
        printf("%s", name);
        Sleep(10);
    }

    // Move your name across the bottom
    for (x = RIGHT - strlen(name) - 1; x >= 0; x--) {
        system ("cls");
        gotoxy(x, BOTTOM);
        printf("%s", name);
        Sleep(10);
    }

    // Move your name up the left side
    for (y = BOTTOM - 1; y > 0; y--) {
        system ("cls");
        gotoxy(0, y);
        printf("%s", name);
        Sleep(10);
    }

    gotoxy(0, BOTTOM + 1);
    getchar();

    return 0;
}
