/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palaca <pln.alaca21@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 03:28:41 by palaca            #+#    #+#             */
/*   Updated: 2024/01/31 17:15:30 by palaca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	sira;

	sira = 122;
	while (sira >= 97)
	{
		write(1, &sira, 1);
		sira--;
	}
}
