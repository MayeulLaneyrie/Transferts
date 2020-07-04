/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayeul_laneyrie <mayeul.lnr@gmail.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 01:03:20 by mayeul_la         #+#    #+#             */
/*   Updated: 2020/07/04 02:15:38 by mayeul_la        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush04.h"
#include "ft_putchar.h"

void	ft_putend(char colors[5], int line, int y, int side)
{
	if (!line && !side)
		ft_putchar(colors[1]);
	else if(!line && side)
		ft_putchar(colors[2]);
	else if(line == y - 1 && !side)
		ft_putchar(colors[3]);
	else if(line == y - 1 && side)
		ft_putchar(colors[4]);
	else
		ft_putchar(colors[0]);
}

void	rush(int x, int y)
{
	int line;
	int column;

	line = 0;
	while (line < y)
	{
		ft_putend("BACCA", line, y, 0);
		column = 1;
		while (column < x - 1)
		{
			if (!line || line == y - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			column++;
		}
		if (x > 1)
			ft_putend("BACCA", line, y, 1);
		ft_putchar('\n');
		line++;
	}
}
