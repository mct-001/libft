/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutopal <mutopal@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 13:14:33 by mutopal           #+#    #+#             */
/*   Updated: 2025/05/27 13:14:33 by mutopal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t l)
{
	size_t	ldst;
	size_t	lsrc;
	size_t	i;

	ldst = 0;
	lsrc = 0;
	i = 0;
	while (ldst < l && dst[ldst])
		ldst++;
	while (src[lsrc])
		lsrc++;
	if (ldst == l)
		return (l + lsrc);
	while (src[i] && (ldst + i + 1) < l)
	{
		dst[ldst + i] = src[i];
		i++;
	}
	if ((ldst + i) < l)
		dst[ldst + i] = '\0';
	return (ldst + lsrc);
}
