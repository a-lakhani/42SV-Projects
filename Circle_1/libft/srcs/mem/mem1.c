/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhani <alakhani@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/27 18:12:19 by alakhani          #+#    #+#             */
/*   Updated: 2020/06/15 22:35:16 by alakhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <libft.h>

void *ft_memset(void *buffer, int ch, size_t num)
{
	unsigned char *c;

	c = buffer;

	while ( num-- )
		*c++ = ch;
	return buffer;
}

void ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

void *ft_memcpy(void *destination, const void *source, size_t num)
{
	char *dest;
	const char *src;
	
	dest = destination;
	src  = source;

	while (num--)
		*dest++ = *src++;
	return destination;
}

void *ft_memccpy(void *destination, const void *source, int ch, size_t num)
{
	char *dest;
	const char *src;
	unsigned char c;
	void *ptr;

	dest = destination;
	src  = source;
	c = (unsigned char) ch;
	ptr = NULL;

	while (num--)
	{
		*dest++ = *src;
		if (*src == c)
		{
			num = 0;
			ptr = dest;
		}
		src++;
	}
	return ptr;
}

void *ft_memmove(void *destination, const void *source, size_t num)
{
	char *tmp[num];

	ft_memcpy(tmp, source, num);
	return ft_memcpy(destination, tmp, num);
}
