#include "Windows.h"
#include <stdio.h>

BOOL WINAPI DllMain(
    HINSTANCE hinstDLL,  // handle to DLL module
    DWORD fdwReason,     // reason for calling function
    LPVOID lpvReserved )  // reserved
{

	if (fdwReason == DLL_PROCESS_ATTACH)
		printf("hello world via dll load!\n");

	return TRUE;
}


__declspec(dllexport) void __cdecl testPrint(void){
	printf("hewwo! you called the testPrint! UWU\n");
}

__declspec(dllexport) int __cdecl add(int a, int b){
	return a + b;
}