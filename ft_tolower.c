/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 22:36:20 by mafajat           #+#    #+#             */
/*   Updated: 2019/10/22 15:28:01 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_tolower(int n)
{
	if (n >= (unsigned char)'A' && n <= (unsigned char)'Z')
		return ((unsigned char)(n + 32));
	else
		return (n);
}
