/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeanner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 23:32:22 by tjeanner          #+#    #+#             */
/*   Updated: 2016/12/14 09:54:46 by tjeanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int i;

	i = 0;
	while (i < (int)n && ((char*)src)[i] != c)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	if ((int)n == i)
		return (NULL);
	else
	{
		((char *)dst)[i] = ((char *)src)[i];
		return (&dst[i + 1]);
	}
}
