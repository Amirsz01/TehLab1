#include "o_private.h"

void o_private::process()
{
	cout << num() / 2 << " ������ �������� � �������" << endl;
	system("pause");
}

och *o_private::return_ptr()
{
	och *result = new o_private;
	return result;
}