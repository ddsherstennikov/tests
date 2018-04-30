#include <iostream>
#include <dlfcn.h>

using namespace std;

extern int LIB1;
extern int LIB2;
extern int LIBX;

int main(int argc, char **argv)
{
	void *handle;
	char *error;

	handle = dlopen ("liblibX.so", RTLD_NOW|RTLD_GLOBAL);
	if (!handle)
	{
		fputs (dlerror(), stderr);
		exit(1);
	}

	if ((error = dlerror()) != NULL)
	{
		fputs(error, stderr);
		exit(1);
	}

	cout <<	"LIB1=" << LIB1 << endl <<
					"LIB2=" << LIB2 << endl <<
					"LIBX=" << LIBX << endl;

	dlclose(handle);

	handle = dlopen ("liblib1.so", RTLD_NOW|RTLD_GLOBAL);

	cout <<	"LIB1=" << LIB1 << endl <<
	"LIB2=" << LIB2 << endl <<
	"LIBX=" << LIBX << endl;

	dlclose(handle);
}