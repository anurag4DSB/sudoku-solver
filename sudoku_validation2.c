/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_validation2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 20:51:13 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/16 13:56:19 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print.h"
#include "sudoku_validation.h"
#include "sudoku_validation2.h"

int		validate_all(char *flatstr)
{
	unsigned i;

	i = 0;
	while (flatstr[i])
	{
		if (IS_NUM(flatstr[i]))
		{
			if (!validate_row(flatstr, i)
				|| !validate_col(flatstr, i)
				|| !validate_sqr(flatstr, i))
				return (0);
		}
		i++;
	}
	return (1);
}

int		validate_row(char *flatstr, unsigned n)
{
	unsigned	row;
	unsigned	c;

	row = N2R(n);
	c = 0;
	while (c < 9)
	{
		if (flatstr[RC2N(row, c)] == flatstr[n]
				&& RC2N(row, c) != n)
		{
			ft_putstr("Error\n");
			return (0);
		}
		c++;
	}
	return (1);
}

int		validate_col(char *flatstr, unsigned n)
{
	unsigned	i;
	unsigned	col;
	unsigned	r;

	i = 0;
	col = N2C(n);
	r = 0;
	while (r < 9)
	{
		if (flatstr[RC2N(r, col)] == flatstr[n]
				&& RC2N(r, col) != n)
		{
			ft_putstr("Error\n");
			return (0);
		}
		r++;
	}
	return (1);
}

int		validate_sqr(char *flatstr, unsigned n)
{
	unsigned	square;
	unsigned	ordinal;
	unsigned	a;
	unsigned	b;

	square = N2S(n);
	ordinal = 0;
	while (ordinal < 4)
	{
		a = ordinal & 2;
		b = ordinal & 1;
		if (flatstr[SAB2N(square, a, b)] == flatstr[n]
				&& SAB2N(square, a, b) != n)
		{
			ft_putstr("Error\n");
			return (0);
		}
		ordinal++;
	}
	return (1);
}
