/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:02:13 by ogdurkan          #+#    #+#             */
/*   Updated: 2022/10/04 12:17:01 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int value)
{
	if (value >= '0' && value <= '9')
		return (1);
	return (0);
}
/*#include <stdio.h>
int	main(void)
{
	int	digit;
	int	digit2;
	digit = ft_isdigit(48);
	digit2 = ft_isdigit(47);
	printf("%d %d", digit, digit2);
}*/
