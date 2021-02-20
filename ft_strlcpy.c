/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 14:22:15 by mafajat           #+#    #+#             */
/*   Updated: 2019/10/30 13:59:04 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t n)
{
	int		count;
	int		j;
	char	*sr;
	size_t	lensrc;

	lensrc = ft_strlen(src);
	sr = (char *)src;
	j = n - 1;
	count = 0;
	if (count < j)
	{
		while (sr[count] != '\0' && count < j)
		{
			dst[count] = sr[count];
			count++;
		}
		dst[count] = '\0';
	}
	return (lensrc);
}
