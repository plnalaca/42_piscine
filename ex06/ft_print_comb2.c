/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palaca <pln.alaca21@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 16:45:04 by palaca            #+#    #+#             */
/*   Updated: 2024/01/31 17:12:12 by palaca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_puthchar(char c)
{
	write(1, &c, 1);
}

void	wrt(int a, int b)
{
	ft_puthchar(a / 10 + '0');
	ft_puthchar(a % 10 + '0');
	ft_puthchar(' ');
	ft_puthchar(b / 10 + '0');
	ft_puthchar(b % 10 + '0');
	if (a < 98)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			wrt(a, b);
			b++;
		}
		a++;
	}
}
