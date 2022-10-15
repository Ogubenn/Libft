/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:16:26 by ogdurkan          #+#    #+#             */
/*   Updated: 2022/10/07 14:16:28 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest <= src)
		ft_memcpy(dest, src, n);
	else if (dest > src)
	{
		while (n > 0)
		{
			*((char *)(dest + (n - 1))) = *((char *)(src + (n - 1)));
			n--;
		}
	}
	return (dest);
}
