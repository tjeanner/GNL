/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeanner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 20:21:00 by tjeanner          #+#    #+#             */
/*   Updated: 2016/12/08 03:47:03 by tjeanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *s)
{
	int i;
	int len;
	int tmp;

	i = ft_strlen(s);
	len = ft_strlen(s);
	while (i >= len / 2)
	{
		tmp = s[i - 1];
		s[i - 1] = s[len - i];
		s[len - i] = tmp;
		i--;
	}
	return (s);
}
