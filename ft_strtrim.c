/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenomar <mbenomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:56:20 by mbenomar          #+#    #+#             */
/*   Updated: 2024/10/25 21:46:24 by mbenomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_haschar(const char *str, char c)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == c)
            return (1);
        i++;
    }
    return (0);
}

static int ft_mark_end(const char *str, const char *set)
{
    size_t str_len;

    str_len = ft_strlen(str);
    while (str_len - 1 > 0)
    {
        if (ft_haschar(set, str[str_len]))
            str_len--;
        else
            return (str_len);
    }
    return (-1);
}

static int ft_mark_start(const char *str, const char *set)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (ft_haschar(set, str[i]))
            i++;
        else
            return (i);
    }
    return (-1);
}

char *ft_strtrim(const char *str, const char *set)
{
    int start;
    int end;

    if (!str || !set)
        return (NULL);
    start = ft_mark_start(str, set);
    end = ft_mark_end(str, set);
    if (start != -1 && end != -1)
        return (ft_substr(str, start, end - start + 1));
    return ((char *)str);
}