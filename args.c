#include "./push_swap.h"
#include <string.h>

//TODO: use mine atoi and strlen

int	args_are_valid(int argc, char *argv[])
{
	int	i;	
	long	res;

	for(i = 1; i < argc; i++)
	{
		if (strlen(argv[i]) == 1)
		{
			if (argv[i][0] == '0')
				continue;
		}
		res = ft_atoi(argv[i]);
		//printf("res [%ld]\n", res);
		if (res == 0)
			return (0);
		if (res < -2147483648 || res > 2147483647)
			return (0);
	}
	return (1);
}

long	ft_atoi(const char *str)
{
	long	i;
	long	number;
	int		sign;

	i = 0;
	number = 0;
	sign = 1;
	while (str[i] && (str[i] == 32 || (str[i] >= 9 && str[i] <= 13)))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = (number * 10) + (str[i] - '0');
		i++;
	}
	return (number * sign);
}
