/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:00:43 by ogdurkan          #+#    #+#             */
/*   Updated: 2022/10/07 13:00:45 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)ptr;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (ptr);
}
/*#include<stdio.h>

int	main(void)
{
	char	a[] = "nazli";
	ft_memset(a, 'o', 2);
	printf("%s\n",a);
}*/
