#include "o_public.h"
#include "el.h"

void o_public::process()
{
	int sum = 0;
	struct el *current = getHead();
	while (current != NULL)
	{
		if (!(current->x % 2))
			sum++;
		current = current->prev;
	}
	cout << "Количество элементов " << sum << endl;
	system("pause");
}