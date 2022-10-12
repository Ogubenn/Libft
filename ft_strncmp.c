/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:40:59 by ogdurkan          #+#    #+#             */
/*   Updated: 2022/10/04 10:44:35 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0')
		&& (s2[i] != '\0') && (i < n))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*#include<stdio.h>
int main()
{

	char a[] = "Nazli";
	char b[] = "Nezli";
	printf("%d\n",ft_strncmp(a,b,5));
	return 0;
}*/
