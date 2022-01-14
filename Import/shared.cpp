#include "shared.h"

bool TestClass::Test(int& num)
{
	if(num == 0)
	{
		num = 1;
		return false;
	}
	else
	{
		num += 42;
		return true;
	}
}
