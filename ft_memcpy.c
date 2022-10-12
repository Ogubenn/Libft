/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:58:23 by ogdurkan          #+#    #+#             */
/*   Updated: 2022/10/07 13:58:26 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*str;
	char	*str2;
	size_t	i;

	i = 0;
	str = (char *)dest;
	str2 = (char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		str[i] = str2[i];
		i++;
	}
	return (dest);
}
/*#include <string.h>
#include <stdio.h>
int	main(void)
{
	char		*a = malloc(sizeof(char) * 5);
	char		*b = malloc(sizeof(char) * 5);
	const char	*src = "hece";
    ft_memcpy(a,src,2);
    printf("%s\n", a);
}*/
