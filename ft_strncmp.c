/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 12:49:31 by mafajat           #+#    #+#             */
/*   Updated: 2019/10/24 17:27:36 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s, const char *ss, size_t n)
{
	if (n == 0)
		return (0);
	while (*s == *ss && --n && *s && *ss)
	{
		if (*s != *ss)
			return ((unsigned char)*s - (unsigned char)*ss);
		s++;
		ss++;
	}
	return ((unsigned char)*s - (unsigned char)*ss);
}
