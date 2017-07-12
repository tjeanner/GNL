/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeanner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 17:55:49 by tjeanner          #+#    #+#             */
/*   Updated: 2017/01/09 19:02:55 by tjeanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int i;
	int d;

	i = 0;
	d = ft_strlen(src);
	while (i < d && i < (int)len)
	{
		dst[i] = src[i];
		i++;
	}
	if (i == d)
	{
		while (i < (int)len)
		{
			dst[i] = '\0';
			i++;
		}
	}
	return (dst);
}
