#include "stdio.h"
#include "stdlib.h"
#include "windows.h"
#include "conio.h"

#define SCREEN_WIDTH 150
#define SCREEN_HEIGHT 80
#define PORTRAIT_LINES 46

const char *portrait[PORTRAIT_LINES] = {
    "                                   .......:::::::...",
    "                                .::^^^^^^^^^^^^^^^^^^^^:::..",
    "                              ::^^^^^^^^::::::::::::^^^^^^^^:::.",
    "                           .:^^^^^^^^^^:::::~^::::::::::::::^^^^::.",
    "                         .:^^^^^^^^::::.::^^~~^^^^^:::::::::::::^^^:.",
    "                        .^^^^^^^::::::^~!7????????????77!~^:::..::^^^:.",
    "                       .^^::::::::^~!?JY55PPPPPPPPPPPPPP55Y?7~^:..:^^^^:.",
    "                      :^::::::::^~!?Y55PPPPGGGGGGGGGGGGGPPP55J7~^..:^^^^:.",
    "                     ::::::::::~!?YPPPGGGGGGGGGGGGGGGGGGGPP55?~~:.::^^^^:",
    "                    ::::..::::~7J5PPGGGGGGGGGGGGGGGGGGGGGPPP55Y?~:. :^^^^^.",
    "                   .:::.::::^~7Y5PPGGGGGGGBBBBGGGBGGBBGGGGGPPPP55Y?~:. :^^^^:.",
    "                  .::::::::^!?YPPPGGGGGGBBBBBBGGBBBBBBBBGGGGGPPPP5YJ!^. .^^^^:",
    "                 .::.:::.:^!J5PPPPGGGGGGGGGBBBBGGGGBBGGGGPP55555555YJ7^  .^^^^:",
    "                 ::.::...^7Y5555YYYJJJJY55PPGGGGGGGGPPYJJ???JJJJJJJYYJ7: ..:^^^.",
    "                ....:...:7Y55YJJJYYYYYY555PPPGGGGGGPP555PPGGGGGGP5YJJJJ!. .:::::.",
    "                ........~J55YY5PGGGGGGPPPPPPPGGGGGGPPPPPPPPPPPPPPPPP5YJ?:  ..:..:",
    "               .:.   ..:7Y55PPPPPP5YYJJJJY55PGGGBGGPP55J?7~^:!7!7JY555YJ~  .....:.",
    "               ...   ..:?55PPP5Y?!!!^^:!J?J5PPGGGGGPPPYJYYJJJYYJ??Y55P5Y?.  .....:.",
    "               :.     .:?5PPPP5JJJY5YYYY555PPPPGGGGPPPPPP555PPPPPPPPPP55J^  ......:",
    "              .:.   ...:?5PPPPPPPPP55555PPPPPGGGGGPPPPGGGGGPPGGGGGGGPPP5Y~  ......:.",
    "              ...   .~^~7YPPPGGGGGGGGPPPPGGGGPPPPPPPPPPPGGGGGGGGGGGGPP55Y~ .......::",
    "              ...    ^7?!YPPPGGGGGGGGGGGGPPPPPGGGBGGPPP555PGGBBBBGGPPP5YJ~ .......::.",
    "              .... . :??!JPPPGGGGBBBBGGP5Y5GG55PGGP5YY5P5Y55PGGGGGPPP55YJ^.::::...:^:",
    "              ..:. ...?J!?5PPGGGGGGGGPP55P55YJJY555YYJYY5PPPPPGGGGPPP55YJ^:::::. ..:^:",
    "              ..::... !Y??YPPPGGGGGPP55PGGGPPGGGPPPGGPPPPPPPPPPPPPPP555YJ:.::^:. ...:::",
    "              ..::....:JY5Y5PPPGGGPPP55PPGGGGGPPPPPPPPPPPPPP5PPPPPP5555Y?...:^.  ..:....",
    "              ...:.... ^5P55PPPPPPPPP555555555YY55555YYYYJJ?J5PPPPPP55YY! ...:. . .::....",
    "              .......   ^??JPPPPPPPPPPY7!?5BGBBB&##&#BBGB5?!JPPPPPPP55Y?: ...:. . ..:. ...",
    "              ........     :YPPPGGGGGPPPYY555PPGGGPGG555YJJ5PPGGPPP55YJ^ .....    ..::....",
    "               ..... ..     :JPPPGGGGPPGGP555555555555YYYY55PPPPP555Y?^  .....  ...........",
    "               ......        .75PPPPPPPPGGGGGPPP55555555P55555PP5YYJ7:   ....    .......:. .",
    "                .....          ^?5PPPPPPPPGGGGGPPPPPPPPPPPP5555YYJ7~.   .:::..   .....:......",
    "                 ::...           ^J55PPPPPGGGGGGGGGGGGGGPPP55YJ?7~^.   .:::.....  .....:::...",
    "                 .:.              ~JJYY55PPPGGGGGGGGGPPPP55Y?7!~~~^.  .::^...........  .:::...",
    "                 ....             ^JJJJJJJY55PPPPPP55555YJ?!!~!!!~^:  :::.  . ........  ..::...",
    "                 .::.. .          :JYYYYJJJJJJJJJJJJJ??77!!!!777!!^: .:::    ..  ....     .:.:.",
    "                 ..:....        .:^JYY5YYYYYJJJ??????7777777???77!~. :...          ......   .:.",
    "                 .:...        :^^.:JY555555555YYYYJJJJJ?????????7!~:....            .....   :.",
    "                 ...       ..:~^. :JY5555555555555YYYYYYJJJJJJJ?77~:....                .. .....",
    "          .:..   .....    .^~!!:  !YY555555555555555555YYYJJJJJ?7!~:...                 .:  ......",
    "           .:::....^~~~!7^~~~!!:.^?YY5555555PPPPPPP5555YYYYJJJJ?7!~^:.                  ..       .",
    "               :~?5GBBBBY~~!!7!^:!JYY555555555PPPPP555YYYYYJJJ??77~~:.           ....         ..  .",
    "            :!JPB##BB##5~~!!77!^^!JY5555555555PPPP55555YYYYJJJ????7!!^..      ....::...      .     .",
    "        :!JPB#####BB##5?^~!77!~^^7?Y5555555555555555555YYYYJJJJJJJ??7!:..............        .......",
    "    :!JPB###BBGGGPYG#G57~~!!77~^^7?Y55555555555555555555YYYYYYYYYYYJ?!~^:...........................",
    ":~JPGBBBGPPPP5YJ?!Y##YY~~~~!77!^:!JY55555555555555555555555YY555555Y?~~~~~:......              .....",
    "GGPGP5555YJ?7!!~~7B&GYJ!!~~~!77~^^?YY55PPPPPPPPPPPPPPPPP55555555555J~~~!!!!:   .                 ..."
};

void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (WORD)color);
}

void moveCursor(int x, int y) {
    COORD p;
    p.X = (SHORT)x;
    p.Y = (SHORT)y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
}

void hideCursor(void) {
    CONSOLE_CURSOR_INFO info;
    info.dwSize = 1;
    info.bVisible = FALSE;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
}

void prepareConsole(void) {
    HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
    SMALL_RECT window = {0, 0, SCREEN_WIDTH - 1, SCREEN_HEIGHT - 1};
    COORD size = {SCREEN_WIDTH, SCREEN_HEIGHT};
    SetConsoleScreenBufferSize(out, size);
    SetConsoleWindowInfo(out, TRUE, &window);
    hideCursor();
    system("cls");
}

void drawPortrait(int visible, int color) {
    int i;
    int startX = 10;
    int startY = 5;

    if (!visible) {
        for (i = 0; i < PORTRAIT_LINES; i++) {
            moveCursor(startX, startY + i);
            printf("%105s", "");
        }
        return;
    }

    setColor(color);
    for (i = 0; i < PORTRAIT_LINES; i++) {
        moveCursor(startX, startY + i);
        printf("%s", portrait[i]);
    }
}

void drawFirework(int centerX, int centerY, int frame) {
    const char symbols[] = "*+x.o";
    int r;

    setColor(9 + (frame % 7));
    for (r = 1; r <= 4; r++) {
        moveCursor(centerX, centerY - r);
        printf("%c", symbols[(frame + r) % 5]);
        moveCursor(centerX, centerY + r);
        printf("%c", symbols[(frame + r + 1) % 5]);
        moveCursor(centerX - r * 2, centerY);
        printf("%c", symbols[(frame + r + 2) % 5]);
        moveCursor(centerX + r * 2, centerY);
        printf("%c", symbols[(frame + r + 3) % 5]);
        moveCursor(centerX - r, centerY - r);
        printf("%c", symbols[(frame + r + 4) % 5]);
        moveCursor(centerX + r, centerY + r);
        printf("%c", symbols[(frame + r + 2) % 5]);
    }
}

void countdown(void) {
    int n;
    for (n = 10; n >= 1; n--) {
        system("cls");
        setColor(11);
        moveCursor(55, 18);
        printf("%2d", n);
        moveCursor(40, 23);
        printf("LET'S START COUNTING PIPS!!!");
        Sleep(700);
    }
}

void celebration(void) {
    int frame, blink, star;

    for (frame = 0; frame < 35; frame++) {
        system("cls");

        setColor(14);
        moveCursor(48, 1);
        printf("HAPPY NEW YEAR EVERYONEEE!!!");

        blink = ((frame / 2) % 2 == 0);
        drawPortrait(blink, 10 + (frame % 6));

        drawFirework(5, 10, frame);
        drawFirework(112, 10, frame + 2);
        drawFirework(6, 45, frame + 3);
        drawFirework(111, 45, frame + 1);

        setColor(11);
        for (star = 0; star < 12; star++) {
            moveCursor(4 + star * 10, 3);
            printf(((star + frame) % 2) ? "." : "*");
        }

        setColor(14);
        moveCursor(39, 56);
        printf("PRAISE THE LORD FOR A NEW BEGINNING!");
        Sleep(300);
    }
}

int main(void) {
    prepareConsole();
    countdown();
    celebration();
    return 0;
}
