/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenomar <mbenomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:32:34 by mbenomar          #+#    #+#             */
/*   Updated: 2024/10/23 21:58:25 by mbenomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *s, char c)
{
    int i;
    int len;

    i = 0;
    len = ft_strlen((char *)s);
    while (i <= len)
    {
        if (s[i] == c)
            return ((char *)&s[i]);
        i++;
    }
    return (0);
}

