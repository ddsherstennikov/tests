// lib1.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"

extern __declspec(dllexport) int LIB1 = 0;
extern __declspec(dllexport) int LIB2 = 0;
extern __declspec(dllexport) int LIBX = 0;

int TMP1 = ++LIB1;
