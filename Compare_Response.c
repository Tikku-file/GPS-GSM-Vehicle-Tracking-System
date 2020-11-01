#include"common.h"
#include"global_data.h"
extern void compare(void)
{
	OK_FLAG = FALSE;
	if (response[1]=='A')
	{
		OK_FLAG = TRUE;
	}
	else
	{
		OK_FLAG = FALSE;
	}
		if (OK_FLAG==TRUE)
		{
			green = TRUE;
		  red = FALSE;
		}
		else
		{
			red = TRUE;
			green = FALSE;
		}
}