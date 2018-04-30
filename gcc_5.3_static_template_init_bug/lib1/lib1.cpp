#include "lib1.h"
#include "runner/reg.h"

int LIB1 = 0;
int LIB2 = 0;
int LIB3 = 0;

int TMP1 = ++LIB1;



class A1 {};
REGISTER(A1, "A", "1")