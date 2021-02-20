/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 14:21:09 by mafajat           #+#    #+#             */
/*   Updated: 2019/10/28 11:22:14 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char				**freeass(char **a, int j)
{
	while (j >= 0)
	{
		free(a[j]);
		j--;
	}
	free(a);
	return (NULL);
}

static int				countwords(const char *str, char c)
{
	int			count;
	const char	*s;

	count = 0;
	while (*str)
	{
		if (*str != c)
		{
			s = str + 1;
			if (*s == c || *s == '\n' || !*s)
				count++;
		}
		str++;
	}
	return (count);
}

static int				countchar(const char *str, char c)
{
	int i;

	i = 0;
	while (*str == c || *str == '\n')
		str++;
	while (*str != c && *str != '\n' && *str)
	{
		i++;
		str++;
	}
	return (i);
}

static const char		*rm(const char *str, char c)
{
	while (*str == c)
		str++;
	return (str);
}

char					**ft_split(char const *str, char c)
{
	char	**a;
	int		count;
	int		i;
	int		j;
	int		x;

	j = 0;
	if (!str)
		return (NULL);
	count = countwords(str, c);
	if (!(a = (char **)malloc(sizeof(*a) * (count + 1))))
		return (NULL);
	while (j < count)
	{
		x = 0;
		i = countchar(str, c);
		if (!(a[j] = (char *)malloc(sizeof(**a) * i + 1)))
			return (freeass(a, j));
		str = rm(str, c);
		while (x < i)
			a[j][x++] = *str++;
		a[j++][x] = 0;
	}
	a[j] = 0;
	return (a);
}
