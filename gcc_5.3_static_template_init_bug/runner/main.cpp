#include <iostream>
#include "lib2/lib2.h"
#include "lib3/lib3.h"

using namespace std;

extern int LIB1;
extern int LIB2;
extern int LIB3;



int main(int argc, char **argv)
{
	//load_lib2();
	//load_lib3();

	cout <<	"LIB1=" << LIB1 << endl <<
			"LIB2=" << LIB2 << endl <<
			"LIB3=" << LIB3 << endl;
}