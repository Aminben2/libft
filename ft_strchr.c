/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenomar <mbenomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:32:34 by mbenomar          #+#    #+#             */
/*   Updated: 2024/10/24 20:20:12 by mbenomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    size_t i;
    size_t len;

    i = 0;
    len = ft_strlen(s);
    while (i <= len)
    {
        if (s[i] == c)
            return ((char *)&s[i]);
        i++;
    }
    return (0);
}

