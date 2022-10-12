/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 07:23:27 by ogdurkan          #+#    #+#             */
/*   Updated: 2022/10/09 07:23:29 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_sizes(char const *s1, char c1)
{
	int	i;

	i = 0;
	while (s1[i] != c1)
		i++;
	return (i);
}

int	ft_sizeb(char const *s3, char c3)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s3[j] != '\0')
	{
		while (s3[j] == c3)
			j++;
		if (s3[j] != '\0')
			i++;
		while (s3[j] != '\0' && s3[j] != c3)
			j++;
	}
	return (i);
}

char	*ft_cs(char const *s2, char c2)
{
	int		i;
	int		len;
	char	*ss;

	i = 0;
	len = ft_sizes(s2, c2);
	ss = (char *)malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		ss[i] = s2[i];
		i++;
	}
	ss[i] = '\0';
	return (ss);
}

char	**ft_split(char const *s, char c)
{
	char	**final;
	int		sizeb;
	int		i;
	int		j;

	i = 0;
	j = 0;
	sizeb = ft_sizeb(s, c);
	final = (char **)malloc(sizeof(char *) * (sizeb + 1));
	if (!final)
		return (0);
	while (s[j] != '\0')
	{
		while (s[j] == c)
			j++;
		if (s[j] != '\0')
		{
			final[i] = ft_cs(&s[j], c);
			i++;
		}
		while (s[j] != '\0' && s[j] != c)
			j++;
	}
	final[i] = 0;
	return (final);
}
