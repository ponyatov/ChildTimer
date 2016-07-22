
#define Tmin 05
#define Tmax 30

#include <iostream>
#include <windows.h>
using namespace std;

int WINAPI WinMain(HINSTANCE ,HINSTANCE ,LPSTR CmdLine, int)
{
	long delay=atoi(CmdLine);
	if (delay<Tmin) delay=Tmin;
	if (delay>Tmax) delay=Tmax;
	for (;;) {
		cout << "delay " << delay << endl;
		Sleep(delay*60*1000);
		system("RUNDLL32 USER32.DLL,LockWorkStation");
	}
	return 0;
}
