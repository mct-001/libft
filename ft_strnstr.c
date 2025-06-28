/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutopal <mutopal@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 19:42:14 by mutopal           #+#    #+#             */
/*   Updated: 2025/05/28 19:42:14 by mutopal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *src, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!src[0])
		return ((char *)str);
	while (i < len && str[i])
	{
		while (str[i + j] == src[j] && (i + j) < len)
		{
			if (!src[j + 1])
				return ((char *)str + i);
			j++;
		}
		i++;
		j = 0;
	}
	return (NULL);
}
