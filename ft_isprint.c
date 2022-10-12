/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 13:36:17 by ogdurkan          #+#    #+#             */
/*   Updated: 2022/10/04 13:38:47 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int value)
{
	if (value >= 32 && value <= 127)
		return (1);
	return (0);
}
/*#include<stdio.h>
int main()
{
	int a,b,c,d;
	a = ft_isprint(32);
	b = ft_isprint(14567467);
	c = ft_isprint(128);
	d = ft_isprint(34);
	printf("%d\n%d\n%d\n%d\n",a,b,c,d);
}*/
