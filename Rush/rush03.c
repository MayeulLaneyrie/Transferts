/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayeul_laneyrie <mayeul.lnr@gmail.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 01:03:20 by mayeul_la         #+#    #+#             */
/*   Updated: 2020/07/04 01:45:09 by mayeul_la        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush03.h"
#include "ft_putchar.h"

void	rush(int x, int y)
{
	int line;
	int column;

	line = 0;
	while (line < y)
	{
		if (!line || line == y - 1)
			ft_putchar('A');
		else
			ft_putchar('B');
		column = 1;
		while (column < x - 1)
		{
			if (!line || line == y - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			column++;
		}
		if ((!line || line == y - 1) && x > 1)
			ft_putchar('C');
		else if (x > 1)
			ft_putchar('B');
		ft_putchar('\n');
		line++;
	}
}
