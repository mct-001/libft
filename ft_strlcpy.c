/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutopal <mutopal@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 00:06:20 by mutopal           #+#    #+#             */
/*   Updated: 2025/05/27 00:06:20 by mutopal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t l)
{
	size_t	i;

	i = 0;
	while (src[i] && i + 1 < l)
	{
		dst[i] = src[i];
		i++;
	}
	if (l > 0)
		dst[i] = '\0';
	i = 0;
	while (src[i])
		i++;
	return (i);
}
