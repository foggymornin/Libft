/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 20:56:26 by mafajat           #+#    #+#             */
/*   Updated: 2019/10/30 13:49:06 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *p;
	unsigned char *pp;

	if (dst == src)
		return (dst);
	p = (unsigned char *)dst;
	pp = (unsigned char *)src;
	if (pp < p)
	{
		while (len--)
			*(p + len) = *(pp + len);
	}
	else
	{
		while (len--)
			*(p++) = *(pp++);
	}
	return (dst);
}
