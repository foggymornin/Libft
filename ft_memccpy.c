/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 16:29:42 by mafajat           #+#    #+#             */
/*   Updated: 2019/10/30 13:56:15 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *to, const void *from, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	*pp;
	int				i;

	i = 0;
	p = (unsigned char *)to;
	pp = (unsigned char *)from;
	while (n--)
	{
		p[i] = pp[i];
		if (pp[i] == (unsigned char)c)
			return ((void *)(to + 1 + i));
		i++;
	}
	return (NULL);
}
