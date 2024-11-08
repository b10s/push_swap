#include "./push_swap.h"
#include <string.h>

//TODO: use mine atoi and strlen

int	args_are_valid(int argc, char *argv[])
{
	int	i;	
	int	res;

	for(i = 1; i < argc; i++)
	{
		if (strlen(argv[i]) == 1)
		{
			if (argv[i][0] == '0')
				continue;
		}
		res = atoi(argv[i]);
		if (res == 0)
			return (0);
	}
	return (1);
}
