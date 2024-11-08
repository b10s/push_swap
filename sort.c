#include "./push_swap.h"


int	*buble_sort(int argc, char *argv[])
{
	int	*res;
	int	i;
	int	j;
	int	x;

	//printf("allocating for remap arr [%d] ints\n", argc - 1);
	res = malloc(sizeof(int) * (argc - 1));
	if (res == NULL)
		return NULL;
	for (i = 0; i < argc - 1; i++)
	{
		//TODO replace to mine
		//TODO check for err
		x = atoi(argv[i+1]);
		res[i] = x;
	}
	//print_arr(res, argc-1);
	for (i =0; i < argc - 2; i++)
	{
		for (j = 0; j < argc - 2; j++)
		{
			x = res[j];
			if (x > res[j+1])
			{
				res[j] = res[j+1];
				res[j+1] = x;
			}
		}
	}
	//print_arr(res, argc-1);
	return res;
}

void	print_arr(int *arr, int len)
{
	int	i;
	for(i = 0; i < len; i++)
	{
		//TODO replace with mine
		printf("%d ", arr[i]);
	}
	//TODO replace with mine
	printf("\n");
}

int	sorted(int argc, char *argv[])
{
	int	i;
	int	pre;
	int	cur;

	for (i = 1; i < argc; i++)
	{
		pre = atoi(argv[i-1]);
		cur = atoi(argv[i]);
		//printf("pre [%d] cur [%d]\n", pre, cur);
		if (pre > cur)
			return (0);
	}
	return (1);
}
