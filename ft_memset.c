/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenomar <mbenomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 20:01:28 by mbenomar          #+#    #+#             */
/*   Updated: 2024/10/22 19:29:22 by mbenomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, unsigned int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *) b)[i++] = (unsigned char) c;
	}
	return (b);
}
