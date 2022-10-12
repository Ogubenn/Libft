/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:56:07 by ogdurkan          #+#    #+#             */
/*   Updated: 2022/10/04 12:00:39 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int value)
{
	if ((value >= 'a' && value <= 'z') || (value >= 'A' && value <= 'Z'))
		return (1);
	return (0);
}
/*#include<stdio.h>
int main()
{
	printf("%d\n",ft_isalpha(68));
	printf("%d\n",ft_isalpha(97));
	printf("%d\n",ft_isalpha(7));
	printf("%d\n",ft_isalpha(24));
	
}*/
