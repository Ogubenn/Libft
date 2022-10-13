/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:45:59 by ogdurkan          #+#    #+#             */
/*   Updated: 2022/10/13 12:51:18 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// BU BIR BAGLI LISTEDIR.
// fonksiyon cagrildiginda verilen icerik (content)
// structimizin content bolumune kaydedilir.
// ilk olusturuldugu icinde next degeri NULL dur
// ve olusturulan yeni struct return edilir.
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ptr;

	ptr = (t_list *)malloc(sizeof(t_list));
	if (!ptr)
		return (0);
	ptr -> content = content;
	ptr -> next = NULL;
	return (ptr);
}
