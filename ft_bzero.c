/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:13:53 by ogdurkan          #+#    #+#             */
/*   Updated: 2022/10/07 13:13:55 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t n)
{
	ft_memset(ptr, 0, n);
}
/*#include<stdio.h>
int	main(void)
{
	char	a[] = "hece\n";
	char	b[] = "hece";
	ft_putstr(a);
	ft_bzero(a, 3);
	ft_putstr(a);
}*/
