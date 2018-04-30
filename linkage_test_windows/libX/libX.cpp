// libX.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"

__declspec(dllimport) int LIBX;

int TMPX = ++LIBX;
