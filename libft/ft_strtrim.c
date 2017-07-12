/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeanner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 18:58:32 by tjeanner          #+#    #+#             */
/*   Updated: 2017/01/25 10:39:58 by tjeanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		a;
	int		b;
	int		i;
	char	*s1;

	if (!s)
		return (NULL);
	a = 0;
	b = ft_strlen(s) - 1;
	i = 0;
	while (s[a] == ' ' || s[a] == '\n' || s[a] == '\t')
		a++;
	if (a == b + 1)
		return (ft_strdup(""));
	while (s[b] == ' ' || s[b] == '\n' || s[b] == '\t')
		b--;
	if (!(s1 = (char*)malloc(b - a + 2)))
		return (NULL);
	while (i <= b - a)
	{
		s1[i] = s[i + a];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
