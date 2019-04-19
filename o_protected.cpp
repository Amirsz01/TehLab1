#include "o_protected.h"
#include "el.h"

void o_protected::process()
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

void o_protected::set(el* head)
{
	setHead(head);
}

void o_protected::setNum(int num)
{
	countEdit(num);
}