#include "findwindow.h"

void findwindow(const char *name)
{
	if wxWindow::FindWindow(name) // i not sure
	{
		hack();
	}
}