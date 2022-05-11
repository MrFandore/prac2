
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{
	
}

void _CYCLIC ProgramCyclic(void)
{
	led1 = butt1;
	led2 = butt2;
	led3 = butt3;
	led4 = butt4;
}

void _EXIT ProgramExit(void)
{

}

