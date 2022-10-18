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

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new -> next = *lst;
	*lst = new;
}
/*#include <stdio.h>
int		main(void)
{
	t_list	*first;
	t_list	*list;
	
	first = ft_lstnew("abc");
	ft_lstadd_front(&list, first);
	printf("%s\n",(char *)first->content);
	
}*/