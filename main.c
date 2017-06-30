/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/15 20:51:13 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/16 23:21:53 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "ft_print.h"
#include "ft_strarr.h"
#include "sudoku_print.h"
#include "sudoku_solver.h"
#include "sudoku_validation.h"
#include "sudoku_validation2.h"

int			main(int argc, char **argv)
{
	char		*flatstr;

	if (!check_num_strings((unsigned)argc))
		return (0);
	flatstr = ft_strarrcat(argv + 1, 9);
	if (!check_len_strings(flatstr)
		|| !check_lex_strings(flatstr)
		|| !check_num_givens(flatstr)
		|| !validate_all(flatstr))
		return (0);
	if (checker(argv + 1, 0, 0, 0) == 1)
	{
		ss(argv + 1, '1', 0, 0);
		sudoku_print(argv);
	}
	else
		ft_putstr("Error\n");
	free(flatstr);
	return (0);
}
