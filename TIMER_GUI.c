#include "TIMER.h"

FILE *GUI;
char S[1024];
int L;

int main(void) {
    ShowWindow( GetConsoleWindow(), SW_MINIMIZE );
    for (;;) {
        GUI=fopen("C:\\tmp\\TIMER.gui","r");
        L=fread(S,sizeof(S[0]),sizeof(S),GUI); S[L]=0;
        fclose(GUI);
        SetConsoleTitle(S);
        printf("%s\n",S);
        Sleep(cfg_PERIOD);
        }
    return 0;
}
