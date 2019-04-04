#include "o_protected.h"

void o_protected::process()
{
	cout << num() / 2 << " четных элемента в очереди" << endl;
	system("pause");
}

och *o_protected::return_ptr()
{
	och *result = new o_protected;
	return result;
}