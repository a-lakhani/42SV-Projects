/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhani <alakhani@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/27 18:08:55 by alakhani          #+#    #+#             */
/*   Updated: 2020/06/15 22:33:40 by alakhani         ###   ########.fr       */
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

