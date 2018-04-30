#include "lib3.h"
#include "runner/reg.h"

extern int LIB3;

int TMP3 = ++LIB3;



class A3 {};
REGISTER(A3, "A", "3")



void load_lib3()
{
	int a;
}