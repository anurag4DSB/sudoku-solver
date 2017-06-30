/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_validation.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/16 02:07:46 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/16 14:50:38 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"
#include "ft_print.h"
#include "ft_strarr.h"
#include "sudoku_validation.h"

int				check_num_strings(unsigned argc)
{
	if (argc != MIN_ARGS)
	{
		ft_putstr("Error\n");
		return (0);
	}
	return (1);
}

int				check_lex_strings(char *flatstr)
{
	unsigned	i;

	i = 0;
	while (flatstr[i])
	{
		if (!IS_SUDOKU_CHAR(flatstr[i]))
		{
			ft_putstr("Error\n");
			return (0);
		}
		i++;
	}
	return (1);
}

int				check_num_givens(char *flatstr)
{
	if (number_of_digits(flatstr) < MIN_GIVENS)
	{
		ft_putstr("Error\n");
		return (0);
	}
	return (1);
}

int				check_len_strings(char *flatstr)
{
	if (ft_strlen(flatstr) != 81)
	{
		ft_putstr("Error\n");
		return (0);
	}
	return (1);
}

unsigned		number_of_digits(char *flatstr)
{
	unsigned	num_count;

	num_count = 0;
	while (*flatstr)
	{
		num_count += IS_NUM(*flatstr);
		++flatstr;
	}
	return (num_count);
}
