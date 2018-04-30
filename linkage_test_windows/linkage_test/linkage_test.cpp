// linkage_test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> 
#include <windows.h> 

using namespace std;

__declspec(dllimport) int LIB1;
__declspec(dllimport) int LIB2;
__declspec(dllimport) int LIBX;

__declspec(dllimport) int FORCE;

int main(int argc, char* argv[])
{
	BOOL freeResult, runTimeLinkSuccess = FALSE;
	HINSTANCE dllHandle = NULL;
	LPCWSTR libx = L"libX.dll";

	FORCE++;

	dllHandle = LoadLibrary(libx);

	cout << "LIB1=" << LIB1 << endl <<
			"LIB2=" << LIB2 << endl <<
			"LIBX=" << LIBX << endl;

	if (NULL != dllHandle)
	{
		freeResult = FreeLibrary(dllHandle);
	}

	return 0;
}

