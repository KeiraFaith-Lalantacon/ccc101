
#include "stdio.h"
#include "windows.h"
#include "stdlib.h"

void gotoxy(int x, int y) {
    COORD c = {(SHORT)x, (SHORT)y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

int main() {
    int i, j, k;
    int x, y;
    char display[] = "HAPPY NEW YEAR, EVERYONE IN THE PLANET EARTH!";

    system("cls");

    gotoxy(50, 20);
    printf("%s", display);

    for (i = 0; i < 5; i++) {

        x = 20 + (i * 20);
        
        for (y = 25; y >= 5; y--) {
            system("cls");

            gotoxy(50, 20);
            printf("%s", display);

            gotoxy(x, y);
            printf("|");

            Sleep(40);
        }

        for (j = 1; j <= 6; j++) {
            system("cls");

            gotoxy(50, 20);
            printf("%s", display);

            gotoxy(x, 5 - j);
            printf("*");

            gotoxy(x - j, 5);
            printf("*");

            gotoxy(x + j, 5);
            printf("*");

            gotoxy(x, 5 + j);
            printf("*");

            gotoxy(x - j, 5 - j);
            printf("*");

            gotoxy(x + j, 5 - j);
            printf("*");

            gotoxy(x - j, 5 + j);
            printf("*");

            gotoxy(x + j, 5 + j);
            printf("*");

            Sleep(100);
        }

        system("cls");
        gotoxy(50, 20);
        printf("%s", display);

    }

    gotoxy(0, 30);
    
    printf("                                   .......:::::::...\n");                                          
    printf("                                .::^^^^^^^^^^^^^^^^^^^^:::..\n");                                        
    printf("                              ::^^^^^^^^::::::::::::^^^^^^^^:::.\n");                                    
    printf("                           .:^^^^^^^^^^:::::~^::::::::::::::^^^^::.\n");                                 
    printf("                         .:^^^^^^^^::::.::^^~~^^^^^:::::::::::::^^^:.\n");                               
    printf("                        .^^^^^^^::::::^~!7????????????77!~^:::..::^^^:.\n");                             
    printf("                       .^^::::::::^~!?JY55PPPPPPPPPPPPPP55Y?7~^:..:^^^^:.\n");                           
    printf("                      :^::::::::^~!?Y55PPPPGGGGGGGGGGGGGPPP55J7~^..:^^^^:.\n");                          
    printf("                     ::::::::::~!?YPPPGGGGGGGGGGGGGGGGGGGGGPP55?~~:.::^^^^:\n");                         
    printf("                    ::::..::::~7J5PPGGGGGGGGGGGGGGGGGGGGGGGPPP55J!~:..:^^^^:.\n");                       
    printf("                   .:::.::::^~7Y5PPGGGGGGGBBBBGGGBGGBBGGGGGPPPP55Y?~:. :^^^^^.\n");                      
    printf("                  .::::::::^!?YPPPGGGGGGBBBBBBGGBBBBBBBBGGGGGPPPP5YJ!^. .^^^^:\n");                      
    printf("                 .::.:::.:^!J5PPPPGGGGGGGGGBBBBGGGGBBGGGGPP55555555YJ7^  .^^^^:\n");                     
    printf("                 ::.::...^7Y5555YYYJJJJY55PPGGGGGGGGPPYJJ???JJJJJJJYYJ7: ..:^^^.\n");                    
    printf("                ....:...:7Y55YJJJYYYYYY555PPPGGGGGGPP555PPGGGGGGP5YJJJJ!. .:::::.\n");                   
    printf("                ........~J55YY5PGGGGGGPPPPPPPGGGGGGPPPPPPPPPPPPPPPPP5YJ?:  ..:..:\n");                   
    printf("               .:.   ..:7Y55PPPPPP5YYJJJJY55PGGGBGGPP55J?7~^:!7!7JY555YJ~  .....:.\n");                  
    printf("               ...   ..:?55PPP5Y?!!!^^:!J?J5PPGGGGGPPPYJYYJJJYYJ??Y55P5Y?.  .....:.\n");                 
    printf("               :.     .:?5PPPP5JJJY5YYYY555PPPPGGGGPPPPPP555PPPPPPPPPP55J^  ......:\n");                 
    printf("              .:.   ...:?5PPPPPPPPP55555PPPPPGGGGGPPPPGGGGGPPGGGGGGGPPP5Y~  ......:.\n");                
    printf("              ...   .~^~7YPPPGGGGGGGGPPPPGGGGPPPPPPPPPPPGGGGGGGGGGGGPP55Y~ .......::\n");                
    printf("              ...    ^7?!YPPPGGGGGGGGGGGGPPPPPGGGBGGPPP555PGGBBBBGGPPP5YJ~ .......::.\n");               
    printf("              .... . :??!JPPPGGGGBBBBGGP5Y5GG55PGGP5YY5P5Y55PGGGGGPPP55YJ^.::::...:^:\n");               
    printf("              ..:. ...?J!?5PPGGGGGGGGPP55P55YJJY555YYJYY5PPPPPGGGGPPP55YJ^:::::. ..:^:\n");              
    printf("              ..::... !Y??YPPPGGGGGPP55PGGGPPGGGPPPGGPPPPPPPPPPPPPPP555YJ:.::^:. ...:::\n");             
    printf("              ..::....:JY5Y5PPPGGGPPP55PPGGGGGPPPPPPPPPPPPPP5PPPPPP5555Y?...:^.  ..:....\n");            
    printf("              ...:.... ^5P55PPPPPPPPP555555555YY55555YYYYJJ?J5PPPPPP55YY! ...:. . .::....\n");           
    printf("              .......   ^??JPPPPPPPPPPY7!?5BGBBB&##&#BBGB5?!JPPPPPPP55Y?: ...:. . ..:. ...\n");          
    printf("              ........     :YPPPGGGGGPPPYY555PPGGGPGG555YJJ5PPGGPPP55YJ^ .....    ..::....\n");          
    printf("               ..... ..     :JPPPGGGGPPGGP555555555555YYYY55PPPPP555Y?^  .....  ...........\n");         
    printf("               ......        .75PPPPPPPPGGGGGPPP55555555P55555PP5YYJ7:   ....    .......:. .\n");        
    printf("                .....          ^?5PPPPPPPPGGGGGPPPPPPPPPPPP5555YYJ7~.   .:::..   .....:......\n");       
    printf("                 ::...           ^J55PPPPPGGGGGGGGGGGGGGPPP55YJ?7~^.   .:::.....  .....:::...\n");       
    printf("                 .:.              ~JJYY55PPPGGGGGGGGGPPPP55Y?7!~~~^.  .::^...........  .:::...\n");      
    printf("                 ....             ^JJJJJJJY55PPPPPP55555YJ?!!~!!!~^:  :::.  . ........  ..::...\n");     
    printf("                 .::.. .          :JYYYYJJJJJJJJJJJJJ??77!!!!777!!^: .:::    ..  ....     .:.:.\n");     
    printf("                 ..:....        .:^JYY5YYYYYJJJ??????7777777???77!~. :...          ......   .:.\n");     
    printf("                 .:...        :^^.:JY555555555YYYYJJJJJ?????????7!~:....            .....   :.\n");      
    printf("                 ...       ..:~^. :JY5555555555555YYYYYYJJJJJJJ?77~:....                .. .....\n");    
    printf("          .:..   .....    .^~!!:  !YY555555555555555555YYYJJJJJ?7!~:...                 .:  ......\n");  
    printf("           .:::....^~~~!7^~~~!!:.^?YY5555555PPPPPPP5555YYYYJJJJ?7!~^:.                  ..       .\n");  
    printf("               :~?5GBBBBY~~!!7!^:!JYY555555555PPPPP555YYYYYJJJ??77~~:.           ....         ..  .\n"); 
    printf("            :!JPB##BB##5~~!!77!^^!JY5555555555PPPP55555YYYYJJJ????7!!^..      ....::...      .     .\n");

    printf("                                        from me to you!\n");

getchar();

return 0;
}
