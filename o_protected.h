#pragma once
#include "och.h"

class o_protected : protected och
{
public:
	void process();
	static och *return_ptr();
};