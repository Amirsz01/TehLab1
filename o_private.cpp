#include "o_private.h"
#include "el.h"

void o_private::process()
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

void o_private::set(el* head) 
{
	setHead(head);
}

void o_private::setNum(int num)
{
	countEdit(num);
}
