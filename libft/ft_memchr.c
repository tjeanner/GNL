/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeanner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 23:46:02 by tjeanner          #+#    #+#             */
/*   Updated: 2017/01/25 04:39:59 by tjeanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	a;

	a = c;
	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == a && i < n)
			return (&((unsigned char *)s)[i]);
		i++;
	}
	return (NULL);
}
