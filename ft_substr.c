/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 15:20:18 by mafajat           #+#    #+#             */
/*   Updated: 2019/10/25 14:43:23 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	int		j;
	char	*ss;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		return (ft_strdup("\0"));
	}
	if (!(ss = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (i < len)
	{
		ss[i++] = s[start++];
	}
	ss[i] = 0;
	return (ss);
}
