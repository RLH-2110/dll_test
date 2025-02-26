#include "Windows.h"
#include <stdio.h>


int main(){
	HMODULE hDll = LoadLibraryA("dll.dll");

	if(hDll == NULL){
		printf("error loading DLL!");
		return 1;
	}

	typedef void(*testFunc)(void);
 	testFunc func = (testFunc)GetProcAddress(hDll, "testPrint");
 	if(func == NULL){
		printf("error loading testPrint from DLL!");
		return 1;
	}
	func();

 	typedef int(*testFunc2)(int,int);
 	testFunc2 add = (testFunc2)GetProcAddress(hDll, "add");
 	if(add == NULL){
		printf("error loading add from DLL!");
		return 1;
	}
 	printf("5+4=%d\n",add(5,4));

 	FreeLibrary(hDll);

	return 0;
}