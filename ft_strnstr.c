/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:31:49 by ogdurkan          #+#    #+#             */
/*   Updated: 2022/10/07 16:31:50 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	a;
	size_t	b;

	if (!*to_find)
		return ((char *)str);
	a = 0;
	while (str[a] != '\0' && (size_t)a < len)
	{
		if (str[a] == to_find[0])
		{
			b = 0;
			while (str[a + b] == to_find[b] && a + b < len)
			{
				if (to_find[b + 1] == '\0')
					return ((char *)&str[a]);
				b++;
			}
		}
		a++;
	}
	return (0);
}
