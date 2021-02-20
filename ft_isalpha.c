/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 19:40:46 by mafajat           #+#    #+#             */
/*   Updated: 2019/10/24 17:05:58 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		lower(int n)
{
	return (n >= (unsigned char)('a') && n <= (unsigned char)('z'));
}

static int		upper(int n)
{
	return (n >= (unsigned char)('A') && n <= (unsigned char)('Z'));
}

int				ft_isalpha(int n)
{
	return (lower(n) || upper(n));
}
