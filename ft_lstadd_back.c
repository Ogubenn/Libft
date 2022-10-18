/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogdurkan <ogdurkan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:04:14 by ogdurkan          #+#    #+#             */
/*   Updated: 2022/10/13 13:04:15 by ogdurkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}
/*#include <stdio.h>
int		main(void)
{
	t_list	*first;
	t_list	*list;
	
	first = ft_lstnew("abc");
	list = ft_lstnew("test");
	ft_lstadd_back(&list, first);
	printf("%s\n",(char *)list->content);
	
}*/
