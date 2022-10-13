/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:53:30 by ogdurkan          #+#    #+#             */
/*   Updated: 2022/10/13 12:53:32 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// daha once olusturulan struct dizimiz (t_list) ve eklenecek eklenen
// yapıdan olusturulan lst ve new atanır ve
// 24 satirda new innext elemani lst nin icerisine atanir.
// 25 de lst nin asil degeri new olur.Ekleme çıkarma yaptığımız için
//aynı zamanda new ve lst i güncelledik.
// boylece new lst nin onune eklenmis olur.
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new -> next = *lst;
	*lst = new;
}
