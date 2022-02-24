#include <unistd.h>

int ft_find_next_prime(int nb)
{
	int	x;
	int	y;

	y = 0;
	if (nb < 0)
		return (2);
	if (nb == 1 || nb == 0 || nb == 2)
		return (2);
	if (nb == 3)
		return (3);
	if (nb > 3 && nb <= 5)
		return (5);
	if (nb >= 6 && nb <=7)
		return (7);
	while (nb != 0)
	{
		x = 2;
		y = 0;
		while (x <= 9)
		{
			if (nb % x == 0)
			{	
				x = 10;
				y = 1;
			}
			x++;		
		}
		if (y == 1)
			nb++;
		else
			return (nb);
	}


}
