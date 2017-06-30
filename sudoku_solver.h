/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_solver.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/16 09:17:59 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/16 23:00:59 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_SOLVER_H
# define SUDOKU_SOLVER_H

# define SEC_ROW(row) (3 * (row / 3))
# define SEC_COL(col) (3 * (col / 3))
# define ROW1(row) ((row + 2) % 3)
# define ROW2(row) ((row + 4) % 3)
# define COL1(col) ((col + 2) % 3)
# define COL2(col) ((col + 4) % 3)

int		ss(char **puzzle, char next, int r, int c);
int		checker(char **puzzle, int count, int r, int c);
int		is_valid(char **puzzle, char number, int row, int col);

#endif
