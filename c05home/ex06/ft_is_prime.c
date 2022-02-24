#include <unistd.h>

int ft_is_prime(int nb)
{
	int 	x;

	x = 2;
	if (nb == 0 || nb == 1)
		return (0);
	if (nb == 2 || nb == 5 || nb == 7 || nb == 3)
		return (1);
	if (nb <= 10)
		return (0);
	while (x <= 9 && nb >= 10)
	{
		if (nb % x == 0)
			return (0);
		x++;	
	}
	return (1);
}
