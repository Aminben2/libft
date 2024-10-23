/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenomar <mbenomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:32:34 by mbenomar          #+#    #+#             */
/*   Updated: 2024/10/23 21:50:14 by mbenomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(char *s, char c)
{
    int i;
    int len;

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
