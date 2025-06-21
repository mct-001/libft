/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutopal <mutopal@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 22:06:21 by mutopal           #+#    #+#             */
/*   Updated: 2025/06/20 21:40:47 by mutopal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*currect;

	if (!lst)
		return ;
	while (*lst)
	{
		currect = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = currect;
	}
	*lst = NULL;
}
