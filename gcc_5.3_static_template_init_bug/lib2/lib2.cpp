#include "lib2.h"
#include "runner/reg.h"

extern int LIB2;

int TMP2 = ++LIB2;



class A2 {};
REGISTER(A2, "A", "2")

void load_lib2()
{
	int a;
}