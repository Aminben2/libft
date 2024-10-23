/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenomar <mbenomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 22:03:40 by mbenomar          #+#    #+#             */
/*   Updated: 2024/10/23 22:20:32 by mbenomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, char c)
{
    int len;

    len = ft_strlen((char *)s);
    while (len >= 0)
    {
        if (s[len] == c)
            return ((char *)&s[len]);
        len--;
    }
    return (0);
}




