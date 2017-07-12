/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_words.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeanner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 07:28:25 by tjeanner          #+#    #+#             */
/*   Updated: 2017/01/25 04:53:33 by tjeanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		*ft_words(char *s, int word, char c)
{
	int		i;
	int		pos;
	int		*res;

	pos = 0;
	i = 0;
	if (!(res = (int*)malloc(sizeof(int) * 2)))
		return (NULL);
	res[0] = 0;
	res[1] = 0;
	while (pos < word && s[i] && word > 0)
	{
		while (s[i] == c)
			i++;
		res[0] = i;
		while (s[i] != c && s[i])
			i++;
		res[1] = i;
		pos++;
	}
	res[1] = res[1] - res[0];
	if (pos == word && word > 0)
		return (res);
	return (NULL);
}
