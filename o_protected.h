#pragma once
#include "och.h"

class o_protected : protected och
{
public:
	void set(el* head);
	void setNum(int num);
	void process();
};