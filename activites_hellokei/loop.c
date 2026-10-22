
#include <stdio.h>
#include <string.h>
#include <windows.h>


void gotoxy(int x, int y) {
    COORD c = {(SHORT)x, (SHORT)y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

int main() {
    char name[] = "Keira Lalantacon";
    int x, y;

    system("cls");

    for (x = 0; x <= 155; x++) {
        system ("cls");
        gotoxy(x, 0);
        printf("%s", name);
        Sleep(10);
    }

    for (y = 1; y <= 43; y++) {
        system ("cls");
        gotoxy(155, y);
        printf("%s", name);
        Sleep(10);
    }

    for (x = 155; x >= 0; x--) {
        system ("cls");
        gotoxy(x, 43);
        printf("%s", name);
        Sleep(10);
    }

    for (y = 43; y > 0; y--) {
        system ("cls");
        gotoxy(0, y);
        printf("%s", name);
        Sleep(10);
    }

    gotoxy(0, 43);
    getchar();

    return 0;
}
