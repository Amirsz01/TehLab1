#pragma once
#include "och.h"

class o_private : private och
{
public:
	void process();
	static och *return_ptr();
};