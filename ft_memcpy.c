/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 10:42:01 by mafajat           #+#    #+#             */
/*   Updated: 2019/10/30 14:31:53 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	const unsigned char	*p2;
	unsigned char		*p1;

	if (s1 == s2)
		return (s1);
	p2 = (const unsigned char*)s2;
	p1 = (unsigned char*)s1;
	while (n--)
		*(p1++) = *(p2++);
	return (s1);
}
