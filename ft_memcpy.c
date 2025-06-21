/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutopal <mutopal@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 22:20:29 by mutopal           #+#    #+#             */
/*   Updated: 2025/05/26 22:20:29 by mutopal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*d;

	if (!dst && !src)
		return (NULL);
	i = 0;
	d = (unsigned char *)dst;
	p = (unsigned char *)src;
	while (i < n)
	{
		d[i] = p[i];
		i++;
	}
	return (dst);
}
