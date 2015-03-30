#include "dll.h"

void handle(const char *name)
{
	void *handle;

	handle = dlopen(name, RTLD_NOW);

	dlclose(handle);

	return handle;
}

void dll(const char *name)
{
	if handle(name)
	{
		hack();	
	}
}
