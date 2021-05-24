/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntadevos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 12:42:32 by ntadevos          #+#    #+#             */
/*   Updated: 2021/01/30 14:07:29 by ntadevos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *d, int val, size_t size)
{
	void *res;

	res = d;
	while (size--)
		*(char*)d++ = (unsigned char)val;
	return (res);
}
