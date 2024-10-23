/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenomar <mbenomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:37:00 by mbenomar          #+#    #+#             */
/*   Updated: 2024/10/23 21:46:32 by mbenomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

void	ft_bzero(void *s, int n);
int		ft_isalnum(char c);
int		ft_isalpha(char c);
int		ft_isascii(int c);
int		ft_isdigit(char c);
int		ft_isprint(int c);
void	*ft_memset(void *b, int c, int len);
int		ft_strlen(char *str);
char *ft_strchr(char *s, char c);
unsigned int ft_strlcat(char *dst, const char *src, unsigned int dsize);

#endif