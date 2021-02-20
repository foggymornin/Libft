/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 22:20:05 by mafajat           #+#    #+#             */
/*   Updated: 2019/10/24 17:26:39 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_toupper(int n)
{
	if (n >= (unsigned char)'a' && n <= (unsigned char)'z')
		return ((unsigned char)(n - 32));
	else
		return (n);
}
