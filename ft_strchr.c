/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:53:01 by ogdurkan          #+#    #+#             */
/*   Updated: 2022/10/07 15:53:03 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	letter;

	letter = (unsigned char)c;
	while (*s)
	{
		if (*s == letter)
			return ((char *)s);
		s++;
	}
	if (letter == '\0')
		return ((char *)s);
	return (NULL);
}
