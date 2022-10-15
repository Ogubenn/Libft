/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 07:24:35 by ogdurkan          #+#    #+#             */
/*   Updated: 2022/10/09 07:24:37 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(int m)
{
	int	i;

	i = 0;
	if (m == -2147483648)
		return (11);
	if (m < 0)
	{
		i++;
		m *= -1;
	}
	while (m != 0)
	{
		m = m / 10;
		i++;
	}
	return (i);
}

char	*ft_create_s(char *s, int n, int len, int i)
{
	if (n == -2147483648)
	{
		s[0] = '-';
		s[1] = '2';
		n = 147483648;
		i = 2;
	}
	if (n < 0)
	{
		s[i] = '-';
		i++;
		n *= -1;
	}
	s[len] = '\0';
	len--;
	while (i <= len)
	{
		s[len] = n % 10 + '0';
		n /= 10;
		len--;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	int		len;
	int		i;
	char	*s;

	i = 0;
	len = ft_len(n);
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	ft_create_s(s, n, len, i);
	return (s);
}
