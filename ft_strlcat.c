/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenomar <mbenomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 20:31:30 by mbenomar          #+#    #+#             */
/*   Updated: 2024/10/24 09:01:39 by mbenomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dst, char *src, int dsize)
{
    int dest_len;
    int src_len;
    int j;

    src_len = ft_strlen(src);
    dest_len = ft_strlen(dst);
    if (dest_len == dsize)
        return (src_len + dsize);
    j = 0;
    while (src[j] && j < dsize - dest_len - 1)
    {
        dst[dest_len + j] = src[j];
        j++;
    }
    return (dest_len + src_len);
}
