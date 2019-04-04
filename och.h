#pragma once
#include <iostream>
#include <cstdlib>

using namespace std;

class och
{
	struct el *head; // начало очередь
	int count;
public:
	och(){ head = NULL; count = 0;};
	int num(); // возвращает count
	void show();
	void put(); // добавление нового элемента
	void cut();
	void copy(och *copy); // copy - Куда скопировать очередь
	void sub(och *first, och *second); // сложить очередь firsh и second
	void countEdit(int num); // Изменить количество элементов
	struct el* getHead(); // Получение головы
	struct el* setHead(struct el* newHead); // Установить начало
	virtual void process() = 0;
};

#include </Users/Amirsz/source/repos/ТестовыйСтенд/ТестовыйСтенд/o_public.h>
#include </Users/Amirsz/source/repos/ТестовыйСтенд/ТестовыйСтенд/o_private.h>
#include </Users/Amirsz/source/repos/ТестовыйСтенд/ТестовыйСтенд/o_protected.h>
