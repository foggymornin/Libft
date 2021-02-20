/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 17:47:28 by mafajat           #+#    #+#             */
/*   Updated: 2019/10/30 12:42:06 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *a, const char *b, size_t l)
{
	size_t i;
	size_t j;
	size_t k;

	j = 0;
	i = 0;
	if (b[j] == 0)
		return ((char *)a);
	while (i < l && a[i])
	{
		k = i;
		while (a[i] == b[j] && i < l)
		{
			i++;
			j++;
			if (b[j] == 0)
				return ((char *)(a + k));
		}
		j = 0;
		i = k + 1;
	}
	return (NULL);
}
