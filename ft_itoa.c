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

static int	get_length(int nbr)
{
	int	counter;

	counter = 0;
	while (nbr > 9)
	{
		counter ++;
		nbr = nbr / 10;
	}
	if (nbr <= 9)
	{
		counter++;
	}
	return (counter);
}

static	int	ft_get_step(int len)
{
	int	step;
	int	counter;

	counter = 0;
	step = 1;
	while (counter < len - 1)
	{
		step *= 10;
		counter++;
	}
	return (step);
}

static char	*ft_make_str(int n, int len, int step, int sign)
{
	int		result;
	int		index;
	char	*str;

	index = 0;
	str = (char *)malloc(sizeof(char) * (len + sign + 1));
	if (sign > 0)
		str[index++] = '-';
	if (sign == 2)
		str[index++] = '2';
	while (index < len)
	{
		if (n > 9)
		{
			result = n / step;
			n = n % step;
			step = step / 10;
			str[index++] = result + 48;
		}
		else
			str[index++] = n + 48;
	}
	str[index] = '\0';
	return (str);
}

static	int	ft_get_sign(int *sign, int n)
{
	int	sign_result;

	sign_result = 0;
	if (n < 0)
	{
		if (n == -2147483648)
		{
			n = -147483648;
			sign_result++;
		}
		n = -n;
		sign_result++;
	}
	*sign = sign_result;
	return (n);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		length;
	int		sign;
	int		step;

	n = ft_get_sign(&sign, n);
	length = get_length(n);
	step = ft_get_step(length);
	str = ft_make_str(n, (length + sign), step, sign);
	return (str);
}
