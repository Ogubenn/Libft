/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:14:07 by ogdurkan          #+#    #+#             */
/*   Updated: 2022/10/08 17:14:08 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//strtrim stringin baştan sondan geçtiğimiz charı kesmemizi
//sağlar.Checkset stringde karakter arar.ilk while stringin
//başından verdiğimiz set stringi ile aynımı diye kontrol 
//eder.Aynıysa a yı arttırır.2.Whileda son indisten itibaren
//aynısını yapar.Sonra kesilen indislerden başlayarak strye atar
//str döndürür.

#include "libft.h"

static int	ft_checkset(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	a;
	size_t	b;
	size_t	i;

	if (s1 == NULL || set == NULL)
		return (NULL);
	a = 0;
	b = ft_strlen(s1);
	while ((s1[a] != '\0') && (ft_checkset(s1[a], set) == 1))
		a++;
	while ((b > a) && (ft_checkset(s1[b - 1], set) == 1))
		b--;
	str = (char *)malloc(sizeof(char) * (b - a) + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (a < b)
		str[i++] = s1[a++];
	str[i] = '\0';
	return (str);
}
/*char	*ft_strtrim(char const *s1, char const *set)
{
	char	*temp;
	int		i;
	int		j;
	int		k;

	i = 0;
	temp = ft_strdup(s1);
	if (!temp)
		return (NULL);
	while (ft_ce(temp[0], set) == 1)
	{
		k = i;
		while (temp[k + 1] != '\0')
		{
			temp[k] = temp[k + 1];
			k++;
		}
		temp[k] = '\0';
	}
	j = ft_strlen(temp);
	j--;
	while (ft_ce(temp[j], set) == 1)
		temp[j--] = '\0';
	return (temp);
}*/
/*#include<stdio.h>
int main()
{
    char a[] = "oguuuuuuubennnnnnoooo";
    char b [] = "o";
    printf("%s\n",ft_strtrim(a,b));
}*/