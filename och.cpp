#include "och.h"
#include "el.h"

int och::num()
{
	return count;
}
struct el* och::getHead()
{
	return head;
}
struct el* och::setHead(struct el* newHead)
{
	head = newHead;
	return head;
}
void och::countEdit(int num)
{
	count = count + num;
}
void och::put()
{
	if(getHead() == NULL)
	{
		struct el* current = setHead(new el);
		current->prev = NULL;
		cout << "x = ";
		cin >> current->x;
		countEdit(1);
		cout << "������� ������� ��������" << endl;
		system("pause");
	}
	else
	{
		el *current = getHead();
		el *newHead = new el;
		cout << "x = ";
		cin >> newHead->x;
		newHead->prev = current;
		setHead(newHead);
		countEdit(1);
		cout << "������� ������� ��������" << endl;
		system("pause");
	}
}
void och::cut()
{
	int i = num();
	el *current = getHead();
	el *buf;
	if (!getHead()) 
	{
		cout << "������� �����" << endl;
		system("pause");
		return;
	}
	buf = getHead();
	while (buf->prev->prev != NULL)
	{
		buf = buf->prev;
	}
	delete buf->prev->prev;
	buf->prev = NULL;
	countEdit(-1);
	cout << "������� ������� �������� �� �������" << endl;
	system("pause");
}

void och::show()
{
	int i = num();
	el *current = head;
	if (!head)
	{
		cout << "������� �����" << endl;
		system("pause");
		return;
	}
	while (current != NULL)
	{
		cout << "[" << i-- << "] " << current->x << endl;
		current = current->prev;
	}
	system("pause");
}

void och::copy(och *copy)
{
	if (!count) 
	{
		cout << "������� �����" << endl;
		system("pause");
		return;
	}
	el *current = head; 
	el *c_Current = new el; // ���������� ��� ��������� � ������
	copy->head = c_Current;
	c_Current->x = current->x;
	current = current->prev;
	while (current != nullptr)
	{
		c_Current->prev = new el;
		c_Current = c_Current->prev;
		c_Current->x = current->x;
		current = current->prev;
	}
	c_Current->prev = NULL;
	copy->count = count;
	cout << "������� ������� �����������" << endl;
	system("pause");
}

void och::sub(och *first, och *second)
{
	if (!first->num() || !second->num())
	{
		cout << "������� �����" << endl;
		system("pause");
		return;
	}
	count = first->num() + second->num();
	el *current = first->head;
	el *c_Current = new el; // ���������� ��� ��������� � ������
	c_Current->prev = current->prev;
	c_Current->x = current->x;
	head = c_Current;
	current = current->prev;
	while (current != nullptr)
	{
		c_Current->prev = new el;
		c_Current = c_Current->prev;
		c_Current->x = current->x;
		current = current->prev;
	}
	current = second->head;
	while (current != nullptr)
	{
		c_Current->prev = new el;
		c_Current = c_Current->prev;
		c_Current->x = current->x;
		current = current->prev;
	}
	c_Current->prev = NULL;
	cout << "������� ������� ���������� � ��������" << endl;
	system("pause");
}