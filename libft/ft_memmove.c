/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeanner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 23:42:30 by tjeanner          #+#    #+#             */
/*   Updated: 2017/01/25 09:54:36 by tjeanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		i;

	i = 0;
	while (i < (int)len)
	{
		if (dst > src)
			((char*)dst)[(int)len - 1 - i] = ((char*)src)[len - 1 - i];
		else
			((char*)dst)[i] = ((char*)src)[i];
		i++;
	}
	return (dst);
}
