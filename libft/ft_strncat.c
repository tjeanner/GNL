/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeanner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 00:12:43 by tjeanner          #+#    #+#             */
/*   Updated: 2017/01/10 11:49:22 by tjeanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t len)
{
	int i;
	int d;

	i = 0;
	d = ft_strlen(s1);
	while (i < (int)len && s2[i])
	{
		s1[d + i] = s2[i];
		i++;
	}
	s1[d + i] = '\0';
	return (s1);
}
