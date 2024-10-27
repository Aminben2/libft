/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenomar <mbenomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:51:54 by mbenomar          #+#    #+#             */
/*   Updated: 2024/10/27 18:10:08 by mbenomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_strs(char **strs)
{
	int	i;

	i = 0;
	while (strs[i])
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

static int	ft_count_words(const char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
			count++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (count);
}

static char	**ft_handle_split(char **strs, char *str, char c)
{
	int		i;
	int		j;
	int		start;
	char	*word;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
			start = i;
		while (str[i] && str[i] != c)
			i++;
		if (i > start)
		{
			word = ft_substr(str, start, i - start);
			if (!word)
				return (free_strs(strs));
			strs[j++] = word;
		}
	}
	strs[j] = NULL;
	return (strs);
}

char	**ft_split(const char *str, char c)
{
	int		word_count;
	char	**strs;

	if (!str)
		return (NULL);
	word_count = ft_count_words(str, c);
	strs = malloc((word_count + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	return (ft_handle_split(strs, (char *)str, c));
}

int main(void)
{
    char **s = ft_split("          ",' ');
    if (s == NULL)
    {
        printf("NULL\n");
    }
    else
    {
        for (size_t i = 0; s[i] != NULL; i++)
        {
            printf("-%s\n", s[i]);
        }
    }
    return (0);
}
