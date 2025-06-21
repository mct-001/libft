/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mutopal <mutopal@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 20:52:57 by mutopal           #+#    #+#             */
/*   Updated: 2025/06/20 21:35:54 by mutopal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digit(int n)
{
	int	c;
	int	i;

	i = 1;
	c = n;
	if (c < 0)
		c = c * -1;
	while (c >= 10)
	{
		c = c / 10;
		i++;
	}
	return (i);
}

static void	ft_fill(char *str, int n, int d)
{
	while (d >= 0)
	{
		str[d] = n % 10 + '0';
		n = n / 10;
		d--;
	}
}

char	*ft_minint(void)
{
	char	*a;

	a = malloc(12);
	if (!a)
		return (NULL);
	ft_strlcpy(a, "-2147483648", 12);
	return (a);
}

char	*ft_itoa(int n)
{
	int		mem;
	char	*str;

	if (n == -2147483648)
		return (ft_minint());
	if (n < 0)
		mem = ft_digit(n) + 2;
	else
		mem = ft_digit(n) + 1;
	str = malloc(mem);
	if (!str)
		return (NULL);
	str[mem - 1] = '\0';
	if (n < 0)
	{
		n = n * -1;
		str[0] = '-';
		ft_fill(str + 1, n, mem - 3);
	}
	else
		ft_fill(str, n, mem - 2);
	return (str);
}
