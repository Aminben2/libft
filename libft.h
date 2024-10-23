/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenomar <mbenomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:37:00 by mbenomar          #+#    #+#             */
/*   Updated: 2024/10/23 22:34:46 by mbenomar         ###   ########.fr       */
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
char    *ft_strchr(const char *s, char c);
unsigned int ft_strlcat(char *dst, char *src, int dsize);
char *ft_strrchr(const char *s, char c);
void *ft_memchr(const void *s, int c, unsigned int n);

#endif