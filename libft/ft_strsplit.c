/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeanner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 23:19:53 by tjeanner          #+#    #+#             */
/*   Updated: 2017/01/25 04:46:20 by tjeanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		a;
	int		j;
	int		*tmp;
	char	**str;

	if (!s)
		return (NULL);
	a = 0;
	j = ft_countwords((char*)s, c);
	str = (char**)malloc((j + 1) * sizeof(char*));
	if (!str)
		return (NULL);
	while (a < j)
	{
		tmp = ft_words((char*)s, a + 1, c);
		str[a] = (char*)malloc(sizeof(char) * (tmp[1] + 1));
		if (!str[a])
			return (NULL);
		str[a] = ft_strsub(s, tmp[0], tmp[1]);
		a++;
	}
	str[a] = NULL;
	return (str);
}
