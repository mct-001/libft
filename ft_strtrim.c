/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutopal <mutopal@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 20:18:17 by mutopal           #+#    #+#             */
/*   Updated: 2025/06/20 22:37:52 by mutopal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_tstrlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

static void	ft_triml(char const *s1, char const *set, int *i, int *k)
{
	int	j;

	*i = 0;
	j = 0;
	while (s1[*i] && set[j] != '\0')
	{
		if (s1[*i] == set[j])
		{
			(*i)++;
			j = -1;
		}
		j++;
	}
	j = 0;
	*k = ft_tstrlen(s1) - 1;
	while (*k >= *i && set[j] != '\0')
	{
		if (s1[*k] == set[j])
		{
			(*k)--;
			j = -1;
		}
		j++;
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = 0;
	ft_triml(s1, set, &i, &k);
	if (i > k)
	{
		str = malloc(1);
		if (!str)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	str = malloc(k - i + 2);
	if (!str)
		return (NULL);
	while (i <= k)
		str[j++] = s1[i++];
	str[j] = '\0';
	return (str);
}
