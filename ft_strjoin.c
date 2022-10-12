/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:04:01 by ogdurkan          #+#    #+#             */
/*   Updated: 2022/10/08 17:04:02 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//strjoin s1 dizisinin sonuna s2 yi ekler.Oluşan str dizisinin,
//sonuna null ekleyerek tamamlar.mallocla s1+s2+1 kadar yer ayır-
//mamız lazım.
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}
/*#include<stdio.h>
int main()
{
    char a[] = "nazli";
    char b[] = "ogu";   
    printf("%s\n",ft_strjoin(a,b));
    return 0;
}*/
