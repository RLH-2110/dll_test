# dll_test
This is a small test project to see how I can create and use DLL files.  

> [!NOTE]
> This project is for Windows using bash and GCC
 
# Overview
There are multiple source files:
| File       |                   Contains                   |
|------------|:--------------------------------------------:|
| dll.c      | This contains the code for the test DLL file |
| dllrun.c   |     This is a C project that runs the DLL    |
| Program.cs |    This is a CS project that runs the DLL    |

There is also a Makefile:
| Target        |                    Description                   |
|---------------|:------------------------------------------------:|
| all (default) |  Compiles the DLL File and the C and C# Programs |
| run           |            Runs the C and C# Programs            |
| clean         | Removes all files generated from the compilation |
