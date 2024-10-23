/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenomar <mbenomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 22:22:12 by mbenomar          #+#    #+#             */
/*   Updated: 2024/10/23 22:39:59 by mbenomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, unsigned int n)
{
    unsigned int i;
    unsigned char *new_s;

    i = 0;
    new_s = (unsigned char *)s;
    while (new_s[i] && i < n)
    {
        if (new_s[i] == (unsigned char)c)
            return ((void *)s);
        s++;
        i++;
    }
    return (0);
}



