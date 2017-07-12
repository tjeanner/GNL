/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeanner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 11:57:50 by tjeanner          #+#    #+#             */
/*   Updated: 2017/01/25 10:24:01 by tjeanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		i;
	int		d;
	char	*str;

	i = 0;
	d = ft_strlen(dst);
	if (!(str = (char*)malloc(ft_strlen(src) + 1)))
		return (0);
	str = ft_strcpy(str, src);
	while (src[i] && d + i < (int)size - 1)
	{
		dst[d + i] = src[i];
		i++;
	}
	dst[d + i] = '\0';
	if ((int)size < d)
		return (ft_strlen(src) + size);
	else
		return (ft_strlen(src) + d);
}
