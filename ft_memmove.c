/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenomar <mbenomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:44:58 by mbenomar          #+#    #+#             */
/*   Updated: 2024/10/26 16:21:40 by mbenomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char* new_src;
    unsigned char *new_dest;

    if (!dest || !src)
		return (NULL);
    new_src = src;
    new_dest = dest;
    if (new_src > new_dest)
        return ft_memcpy(dest,src,n);
    else {
        while (n > 0)
        {
            new_dest[n - 1] = new_src[n - 1];
            n--;
        }
        return (dest);
    }
}
