/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 17:34:21 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/16 13:50:05 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strarr.h"
#include "ft_str.h"

#include <stdlib.h>

char	*ft_strarrcat(char **strarr, unsigned sz)
{
	unsigned	i;
	char		*head;
	char		*src;
	char		*flatstr;

	if (strarr == 0 || sz == 0)
		return (0);
	flatstr = malloc(ft_strarrlen(strarr, sz) + 1);
	head = flatstr;
	i = 0;
	while (i < sz)
	{
		src = *(strarr + i);
		while (*src)
			*flatstr++ = *src++;
		i++;
	}
	*flatstr = '\0';
	return (head);
}

char	*ft_strarrcat_delim(char **strarr, unsigned sz, char delim)
{
	unsigned	i;
	char		*head;
	char		*src;
	char		*flatstr;

	if (strarr == 0 || sz == 0)
		return (0);
	flatstr = malloc(ft_strarrlen(strarr, sz) + sz);
	head = flatstr;
	i = 0;
	while (i < sz - 1)
	{
		src = *(strarr + i);
		while (*src)
			*flatstr++ = *src++;
		*flatstr++ = delim;
		i++;
	}
	src = *(strarr + i);
	while (*src)
		*flatstr++ = *src++;
	*flatstr = '\0';
	return (head);
}

int		ft_strarrlen(char **strarr, unsigned sz)
{
	unsigned i;

	i = 0;
	while (i < sz)
	{
		i += ft_strlen(*strarr);
		strarr++;
	}
	return (i);
}
