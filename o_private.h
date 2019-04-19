#pragma once
#include "och.h"

class o_private : private och
{
public:
	void set(el* head);
	void setNum(int num);
	void process();
};