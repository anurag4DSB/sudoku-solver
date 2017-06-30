/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_validation2.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/16 02:12:44 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/16 13:59:27 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_VALIDATION2_H
# define SUDOKU_VALIDATION2_H

# define N2R(n) (n / 9)
# define N2C(n) (n % 9)
# define N2S(n) (n / 27 * 3 + n / 3 % 3)
# define RC2N(r, c) (9 * r + c)
# define SAB2N(s, a, b) (s / 3 * 27 + s % 3 * 3 + 9 * b + a)
# define SAB2R(s, a, b) N2R(SAB2N(s, a, b))
# define SAB2C(s, a, b) N2C(SAB2N(s, a, b))

int		validate_sqr(char *flatstr, unsigned n);
int		validate_row(char *flatstr, unsigned n);
int		validate_col(char *flatstr, unsigned n);
int		validate_all(char *flatstr);

#endif
