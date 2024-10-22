/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenomar <mbenomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:48:49 by mbenomar          #+#    #+#             */
/*   Updated: 2024/10/22 18:43:37 by mbenomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dst, const void *src, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *) dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
