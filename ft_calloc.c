/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutopal <mutopal@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 23:44:47 by mutopal           #+#    #+#             */
/*   Updated: 2025/06/20 21:27:49 by mutopal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void			*mem;
	size_t			i;
	unsigned char	*p;

	i = 0;
	mem = malloc(num * size);
	if (!mem)
		return (NULL);
	p = (unsigned char *)mem;
	while (i < (num * size))
	{
		p[i] = 0;
		i++;
	}
	return (mem);
}
