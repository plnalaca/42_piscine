
#include <unistd.h>

extern	void	ft_putchar(char c);

void	print_horizontal(long x, char left, char mid, char right)
{
	if (x -- >= 1)
	{
		ft_putchar(left);
		while (x -- >= 2)
			ft_putchar(mid);
		if (x == 0)
			ft_putchar(right);
		ft_putchar('\n');
	}
}

void	print_vertical(long x, long y, char wall)
{
	int	i;

	while (y -- > 2)
	{
		ft_putchar(wall);
		i = 2;
		while (x > i ++)
			ft_putchar(' ');
		if (x > 1)
		{
			ft_putchar(wall);
			ft_putchar('\n');
		}
		else
			ft_putchar('\n');
	}
}

void	rush(long x, long y)
{
	if (x > 0 && y > 0)
	{
		print_horizontal(x, 'o', '-', 'o');
		print_vertical(x, y, '|');
		if (y >= 2)
		{
			print_horizontal(x, 'o', '-', 'o');
		}
	}
	else
	{
		write(2, "Doğru değer giriniz", 19);
	}
}
