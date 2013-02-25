#include "TIMER.h"

char title[1024];
int T=0;

FILE *GUI;
void msg(char *s)
{
     printf("%s\n",s);
     SetConsoleTitle(s);
     GUI=fopen("C:\\tmp\\TIMER.gui","w");
     fprintf(GUI,"%s",s);
     fclose(GUI);
     }

int main(void) {
	title[0]=0;
	msg("timer [minutes]:"); scanf("%i",&T); assert(T>=1);
    ShowWindow( GetConsoleWindow(), SW_HIDE );
    system("start TIMER_GUI.exe");
    for (;T>0;T--) {
        sprintf(title,"TIMER= %i min",T); msg(title);
        if (T<=3) Beep(888,888);
        Sleep(cfg_PERIOD);
        }
    msg("TIMEOUT");
    system("RUNDLL32 USER32.DLL,LockWorkStation");
	return 0;
}

