/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeanner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 04:22:39 by tjeanner          #+#    #+#             */
/*   Updated: 2017/01/25 04:44:42 by tjeanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		a;
	char	*s;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	a = ft_strlen(s1);
	if (!(s = (char*)malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (NULL);
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}
	while (s2[i - a] != '\0')
	{
		s[i] = s2[i - a];
		i++;
	}
	s[i] = '\0';
	return (s);
}
