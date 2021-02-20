/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 12:33:22 by mafajat           #+#    #+#             */
/*   Updated: 2019/10/23 12:51:50 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s, const void *ss, size_t n)
{
	unsigned char *p;
	unsigned char *pp;

	if (n == 0)
		return (0);
	p = (unsigned char *)s;
	pp = (unsigned char *)ss;
	while (*p == *pp && --n)
	{
		p++;
		pp++;
	}
	return ((int)(*p - *pp));
}
