/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeanner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 07:48:26 by tjeanner          #+#    #+#             */
/*   Updated: 2017/01/25 01:25:35 by tjeanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	void	*tmp;
	t_list	*link;

	if (lst->next != NULL)
	{
		tmp = ft_lstmap(lst->next, f);
	}
	link = ft_lstnew(f(lst)->content, f(lst)->content_size);
	if (lst->next != NULL)
		link->next = tmp;
	return (link);
}
