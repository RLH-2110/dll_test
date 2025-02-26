// See https://aka.ms/new-console-template for more information

using System;
using System.Runtime.InteropServices;



// Load the DLL (ensure it's in the same directory as your .exe!)
const string DLL_NAME = "dll.dll";

// Declare the functions from the DLL
[DllImport(DLL_NAME, CallingConvention = CallingConvention.Cdecl)]
static extern void testPrint();

[DllImport(DLL_NAME, CallingConvention = CallingConvention.Cdecl)]
static extern int add(int a, int b);

{
    // Call the functions!
    testPrint();
    int result = add(3, 7);

    Console.WriteLine($"add(3, 7) returned: {result}");
}