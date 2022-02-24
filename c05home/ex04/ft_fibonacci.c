#include <unistd.h>

int		ft_fibonacci(int index)
{
	int x;

	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index < 0)
		return (-1);
	if (index > 1)
	{
		x = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (x);
	}
}
