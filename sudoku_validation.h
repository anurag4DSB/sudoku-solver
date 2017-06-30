/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_validation.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/16 02:03:21 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/16 13:40:13 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_VALIDATION_H
# define SUDOKU_VALIDATION_H

# define MIN_ARGS (10u)
# define MIN_GIVENS (17u)
# define IS_NUM(c) (c >= '0' && c <= '9')
# define IS_SUDOKU_CHAR(c) (c == '.' || (c >= '0' && c <= '9'))

int				check_num_strings(unsigned argc);
int				check_len_strings(char *flatstr);
int				check_lex_strings(char *flatstr);
int				check_num_givens(char *flatstr);
unsigned		number_of_digits(char *flatstr);

#endif
