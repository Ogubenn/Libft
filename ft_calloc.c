/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:40:50 by ogdurkan          #+#    #+#             */
/*   Updated: 2022/10/09 06:33:40 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//calloc malloctan farklı olarak ramde ayırdığımız 
//değerleri korumaz.
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*d;

	d = (char *)malloc(size * nmemb);
	while (nmemb > 0)
	{
		*d = '\0';
		d++;
		nmemb--;
	}
	return (d);
}
/*#include <stdio.h>
int main()
{
	int *a;
	a = malloc(30 * sizeof(int));
	//a = calloc(30 , sizeof(int));
	a[1] = 5;
	printf("%d\n",a[1]);
}*/
