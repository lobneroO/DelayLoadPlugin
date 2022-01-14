

#include "DelayLoadPlugin/Public/MinimalLoad.h"
#include "shared.h"

bool DelayedClass::DelayedAction(int32& num)
{
	if(num != 0)
	{
		num++;
	}

	return TestClass::Test(num);
}
