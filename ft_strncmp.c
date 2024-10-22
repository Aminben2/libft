/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenomar <mbenomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:04:24 by mbenomar          #+#    #+#             */
/*   Updated: 2024/10/22 19:06:41 by mbenomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	strncmp(const char *s1, const char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}