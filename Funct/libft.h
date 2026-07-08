/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciufo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 08:51:43 by rciufo            #+#    #+#             */
/*   Updated: 2026/07/03 12:40:15 by rciufo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
#define	LIBFT_H
#include <stdio.h>
#include <stddef.h>

int	ft_isalpha(int x);
int	ft_isdigit(int x);
int	ft_isalnum(int x);
int	ft_isascii(int x);
int	ft_isprint(int x);
int	ft_strlen(int x);
void	ft_memset(void *s, int c, size_t n);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *d, const void *s, size_t n);
void    ft_memmove(void *d, const void *s, size_t n);
void	ft_strlcpy(char *d, const char *s, size_t n);
void	ft_strlcat(char *d, const char *s, size_t n);
int	ft_toupper(int c);
int	ft_tolower(int c);
char	ft_strchr(const char *a, int c);
char	ft_strrchr(const char *a, int c);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
void	*memchr(const void *s, int c, size_t n);
int	memcmp(const void *s1, const void *s2, size_t n);
/*	ft_strnstr();
	ft_atoi();
	ft_calloc()
	ft_strdup();
*/
#endif
