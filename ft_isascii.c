/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 13:28:33 by ogdurkan          #+#    #+#             */
/*   Updated: 2022/10/04 13:34:20 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*#include<stdio.h>
int main()
{
	int a,b,c,d;
	a = ft_isascii(5);
	b = ft_isascii(14567467);
	c = ft_isascii(128);
	d = ft_isascii(0);
	printf("%d\n%d\n%d\n%d\n",a,b,c,d);
}*/
