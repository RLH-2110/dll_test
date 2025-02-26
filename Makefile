	
all: dllrun.exe dll.dll tempProj.exe

tempProj.exe: Program.cs
	dotnet new console -n tempProj
	cd tempProj
	cp ../Program.cs .
	dotnet publish -r win-x64 -c Release -o . --no-self-contained
	cp tempProj.* ../
	cd ..
	rm -rf tempProj

dllrun.exe: dllrun.c 
	gcc dllrun.c -o dllrun.exe

dll.dll: dll.c
	gcc dll.c -o dll.dll -shared

run: all
	./dllrun.exe
	./tempProj.exe

clear: clean
clean:
	rm -rf dll.dll
	rm -rf dllrun.exe
	rm -rf tempProj.*
	
.PHONY: all run clear clean