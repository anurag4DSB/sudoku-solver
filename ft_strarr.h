/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/16 03:21:07 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/16 13:46:30 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRARR_H
# define FT_STRARR_H

char	*ft_strarrcat(char **src, unsigned sz);
char	*ft_strarrcat_delim(char **src, unsigned sz, char delim);
int		ft_strarrlen(char **str, unsigned sz);

#endif
