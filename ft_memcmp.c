/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenomar <mbenomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 22:41:15 by mbenomar          #+#    #+#             */
/*   Updated: 2024/10/24 19:55:12 by mbenomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned int i;
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
#include <stdio.h>
#include <string.h>

void test_ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
    int result = ft_memcmp(s1, s2, n);
    int expected = memcmp(s1, s2, n);

    if (result == expected)
    {
        printf("Test passed for s1: \"%s\", s2: \"%s\", n: %u\n", (char *)s1, (char *)s2, n);
    }
    else
    {
        printf("Test failed for s1: \"%s\", s2: \"%s\", n: %u\n", (char *)s1, (char *)s2, n);
        printf("  ft_memcmp result: %d\n", result);
        printf("  memcmp result: %d\n", expected);
    }
}
