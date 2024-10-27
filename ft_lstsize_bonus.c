/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenomar <mbenomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:37:31 by mbenomar          #+#    #+#             */
/*   Updated: 2024/10/27 09:01:44 by mbenomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

// int main(void)
// {
//     t_list *node = ft_lstnew("amine");
//     t_list *node1 = ft_lstnew("ben");
//     t_list *node2 = ft_lstnew("yasine");

//     node->next = node1;
//     node->next->next = node2;

//     printf("%d",ft_lstsize(node));
//     return (0);
// }
