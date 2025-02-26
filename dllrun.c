#include "Windows.h"
#include <stdio.h>


int main(){
	HMODULE hDll = LoadLibraryA("dll.dll");

	typedef void(*testFunc)(void);
 	testFunc func = (testFunc)GetProcAddress(hDll, "testPrint");
 	func();

 	typedef int(*testFunc2)(int,int);
 	testFunc2 add = (testFunc2)GetProcAddress(hDll, "add");
 	printf("5+4=%d\n",add(5,4));

	return 0;
}