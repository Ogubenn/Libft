/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 13:12:10 by ogdurkan          #+#    #+#             */
/*   Updated: 2022/10/04 13:25:02 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= 48 && c <= 57))
		return (1);
	return (0);
}
/*#include<stdio.h>
int main()
{
	int a,b,c,d;
	a = ft_isalnum(50);
	b = ft_isalnum(9);
	c = ft_isalnum(66);
	d = ft_isalnum(99);
	printf("%d\n%d\n%d\n%d\n",a,b,c,d);
}*/
