/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:24:59 by ogdurkan          #+#    #+#             */
/*   Updated: 2022/10/07 16:25:00 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*buffer1;
	unsigned char	*buffer2;

	buffer1 = (unsigned char *)s1;
	buffer2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while ((buffer1[i] == buffer2[i]) && i < n - 1)
		i++;
	return (buffer1[i] - buffer2[i]);
}
