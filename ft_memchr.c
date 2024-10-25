/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenomar <mbenomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 22:22:12 by mbenomar          #+#    #+#             */
/*   Updated: 2024/10/25 15:21:05 by mbenomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t              i;
    const unsigned char *new_s;

    i = 0;
    new_s = s;
    while (i < n)
    {
        if (new_s[i] == (unsigned char)c)
            return ((void *)(new_s + i));
        i++;
    }
    return (NULL);
}
