// lib2.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"

__declspec(dllimport) int LIB2;

extern __declspec(dllexport) int FORCE = 42;

int TMP2 = ++LIB2;
