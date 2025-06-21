/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutopal <mutopal@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 17:39:20 by mutopal           #+#    #+#             */
/*   Updated: 2025/05/27 17:39:20 by mutopal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	ch;

	i = 0;
	ch = (char)c;
	while (s[i] != '\0')
		i++;
	while (s[i] != ch)
	{
		if (i == 0)
			return (NULL);
		i--;
	}
	return ((char *)s + i);
}
