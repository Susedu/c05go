#include <unistd.h>

int ft_sqrt(int nb)
{
	int	a;

	a = 1;
	while (a * a <= nb && a <= 46340)
	{
		if (a * a == nb)
			return (a);
		else
			a++;
	}
	return (0);
}
