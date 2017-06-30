/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_solver.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/16 08:52:41 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/16 23:11:40 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku_solver.h"
#include <stdio.h>

int		ss(char **pz, char next, int r, int c)
{
	if (r == 9)
		return (1);
	if (pz[r][c] != '.')
		return (c == 8 ? ss(pz, '1', r + 1, 0) : (ss(pz, '1', r, c + 1)));
	while (next >= '0' && next <= '9')
	{
		if (is_valid(pz, next, r, c))
		{
			pz[r][c] = next;
			if (c == 8)
			{
				if (ss(pz, '1', r + 1, 0))
					return (1);
			}
			else
			{
				if (ss(pz, '1', r, c + 1))
					return (1);
			}
			pz[r][c] = '.';
		}
		next++;
	}
	return (0);
}

int		checker(char **puzzle, int count, int r, int c)
{
	int guess;

	if (r > 8)
	{
		r = 0;
		if (++c > 8)
		{
			return (1 + count);
		}
	}
	if (puzzle[r][c] != '.')
		return (checker(puzzle, count, r + 1, c));
	guess = '1';
	while (guess <= '9' && count < 2)
	{
		if (is_valid(puzzle, guess, r, c))
		{
			puzzle[r][c] = guess;
			count = checker(puzzle, count, r + 1, c);
		}
		++guess;
	}
	if (count < 2)
		puzzle[r][c] = '.';
	return (count);
}

int		is_valid(char **pz, char num, int r, int c)
{
	int			i;

	i = 0;
	while (i < 9)
	{
		if (pz[i][c] == num)
			return (0);
		if (pz[r][i] == num)
			return (0);
		i++;
	}
	if ((pz[ROW1(r) + SEC_ROW(r)][COL1(c) + SEC_COL(c)] == num)
		|| (pz[ROW2(r) + SEC_ROW(r)][COL1(c) + SEC_COL(c)] == num)
		|| (pz[ROW1(r) + SEC_ROW(r)][COL2(c) + SEC_COL(c)] == num)
		|| (pz[ROW2(r) + SEC_ROW(r)][COL2(c) + SEC_COL(c)] == num))
		return (0);
	return (1);
}
