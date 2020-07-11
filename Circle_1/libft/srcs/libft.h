/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhani <alakhani@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/27 18:08:55 by alakhani          #+#    #+#             */
/*   Updated: 2020/06/19 22:41:35 by alakhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

void *ft_memset(void *buffer, int ch, size_t num);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *destination, const void *source, size_t num);
void *ft_memccpy(void *destination, const void *source, int ch, size_t num);
void *ft_memmove(void *destination, const void *source, size_t num);
void *ft_memchr(const void *s, int c, size_t n);
void *ft_memrchr(const void *s, int c, size_t n);
int ft_memcmp(const void *ptr1, const void *ptr2, size_t num);
size_t ft_strlen(const char *str);
size_t ft_strlcpy(char * dest, const char * src, size_t destlen);
size_t ft_uCeiling(size_t add1, size_t add2, size_t max);
size_t ft_uFloor(size_t sub1, size_t sub2, size_t floor);
