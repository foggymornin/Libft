/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 15:25:42 by mafajat           #+#    #+#             */
/*   Updated: 2019/10/24 18:44:25 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		first(char const *s, char const *set)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (set[j])
		{
			while (s[i] == set[j])
			{
				i++;
				j = 0;
			}
			j++;
		}
		else
			return (i);
	}
	return (i);
}

static int		last(char const *s, char const *set)
{
	int i;
	int j;

	i = ft_strlen(s) - 1;
	j = 0;
	while (s[i])
	{
		if (set[j])
		{
			while (s[i] == set[j])
			{
				i--;
				j = 0;
			}
			j++;
		}
		else
			return (i);
	}
	return (i);
}

char			*ft_strtrim(char const *s, char const *set)
{
	char	*ss;
	int		i;
	int		j;
	int		k;

	if (s == NULL)
		return (NULL);
	k = 0;
	i = first(s, set);
	if (s[i] == 0)
		return (ft_calloc(1, sizeof(char)));
	j = last(s, set);
	if (!(ss = malloc(sizeof(char) * (j - i + 2))))
		return (NULL);
	while (i <= j)
	{
		ss[k++] = s[i++];
	}
	ss[k] = 0;
	return (ss);
}
