/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenomar <mbenomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:57:38 by mbenomar          #+#    #+#             */
/*   Updated: 2024/10/24 21:42:51 by mbenomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
    size_t i;
    size_t j;

    if (to_find[0] == '\0')
		return ((char *)str);
    i = 0;
    while (str[i] && i < len)
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] && (i + j) < len)
			j++;
        if (to_find[j] == '\0')
            return ((char *)&str[i]);
		i++;
	}
    return (NULL);
}
