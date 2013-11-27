#include <stdlib.h>
#include <stdio.h>
//#include <unistd.h>
#include <time.h>
#include <windows.h>

int main()
{
	srand(time(0));
	int T=111+rand()%222;// printf("\n\n%i\n\n",T);
	Sleep(T*1000);
	system("RUNDLL32 USER32.DLL,LockWorkStation");
	return 0;
}

