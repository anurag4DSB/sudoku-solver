/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pretty_sudoku_print.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/16 07:00:56 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/16 14:46:42 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print.h"
#include "ft_print.h"

void	sudoku_print(char **argv)
{
	unsigned	i;
	unsigned	j;

	i = 1;
	j = 0;
	while (i < 10)
	{
		while (j < 8)
		{
			ft_putchar(argv[i][j]);
			ft_putchar(' ');
			j++;
		}
		ft_putchar(argv[i][j]);
		ft_putchar('\n');
		j = 0;
		i++;
	}
}
