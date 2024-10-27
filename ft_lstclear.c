/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenomar <mbenomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 09:52:47 by mbenomar          #+#    #+#             */
/*   Updated: 2024/10/27 10:27:59 by mbenomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!del || !lst)
		return ;
	while (*lst)
	{
		tmp = *lst;
		ft_lstdelone(*lst, del);
		*lst = tmp->next;
	}
}

int	main(void)
{
	t_list *head = ft_lstnew(ft_strdup("amine"));
	t_list *node1 = ft_lstnew(ft_strdup("yassine"));
	t_list *node2 = ft_lstnew(ft_strdup("moad"));
	t_list *node3 = ft_lstnew(ft_strdup("benomar"));

	head->next = node1;
	node1->next = node2;
	node2->next = node3;
	printf("before : %d\n", ft_lstsize(head));
	ft_lstclear(&head, &free);
	printf("After : %d\n", ft_lstsize(head));
	return (0);
}