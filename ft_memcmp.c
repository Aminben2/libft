/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenomar <mbenomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 22:41:15 by mbenomar          #+#    #+#             */
/*   Updated: 2024/10/24 20:22:37 by mbenomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    const unsigned char *new_s1;
    const unsigned char *new_s2;

    if (n == 0)
        return (0);
    i = 0;
    new_s1 = s1;
    new_s2 = s2;
    while (i < n)
    {
        if (new_s1[i] != new_s2[i])
            return (new_s1[i] - new_s2[i]);
        i++;
    }
    return (0);
}
