/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:11:04 by ogdurkan          #+#    #+#             */
/*   Updated: 2022/10/07 15:11:06 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	i;
	unsigned char	*p;

	i = c;
	p = (unsigned char *)s;
	while (*p && n > 0)
	{
		if (*p == i)
			return ((unsigned char *)p);
		p++;
		n--;
	}
	return (NULL);
}
