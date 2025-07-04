/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutopal <mutopal@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 18:47:28 by mutopal           #+#    #+#             */
/*   Updated: 2025/05/28 18:47:28 by mutopal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*st;
	unsigned char	ch;
	size_t			i;

	i = 0;
	st = (unsigned char *)s;
	ch = (unsigned char )c;
	while (i < n)
	{
		if (st[i] == ch)
			return (st + i);
		i++;
	}
	return (NULL);
}
