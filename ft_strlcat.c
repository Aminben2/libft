/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenomar <mbenomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 20:31:30 by mbenomar          #+#    #+#             */
/*   Updated: 2024/10/24 20:19:11 by mbenomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dsize)
{
    size_t dest_len;
    size_t src_len;
    size_t j;

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
