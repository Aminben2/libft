/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenomar <mbenomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:41:22 by mbenomar          #+#    #+#             */
/*   Updated: 2024/10/26 13:30:23 by mbenomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t ft_numlen(int num)
{
    size_t len;

    len = 0;
    if (num <= 0)
        len++;
    while (num)
    {
        num /= 10;
        len++;
    }
    return (len);
}

char *ft_itoa(int n)
{
    size_t  num_len;
    char    *str;

    num_len = ft_numlen(n);
    str = malloc(num_len + 1);
    if (!str)
        return (NULL);
    str[num_len] = '\0';
    if (n < 0)
    {
        n *= -1;
        str[0] = '-';
    }
    if (n == 0)
        str[0] = '0';
    while (n)
    {
        str[--num_len] = (n % 10) + '0';
        n /= 10;
    }
    return (str);
}
// int main(void)
// {
//     printf("%s",ft_itoa(-14545));
//     return 0;
// }