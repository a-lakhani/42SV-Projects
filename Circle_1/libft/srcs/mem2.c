/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhani <alakhani@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/27 18:12:27 by alakhani          #+#    #+#             */
/*   Updated: 2020/06/16 21:46:11 by alakhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void *ft_memchr(const void *src, int ch, size_t n);
{
	unsigned char 	*s;
	unsigned char 	c;
	int 			i;

	i = 0;
	s = (unsigned char *) src;
	c = (unsigned char) ch;

	while (n - i)
	{
		if ( *(s + i) == c )
			return (void *) (s + i);
		i++;
	}
	return NULL;
}

void *ft_memrchr(const void *src, int ch, size_t n);
{
	unsigned char 	*s;
	unsigned char 	c;

	s = (unsigned char *) src;
	c = (unsigned char) ch;

	while (n)
	{
		if ( *(s + n) == c )
			return (void *) (s + n);
		n--;
	}
	return NULL;
}

int ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	unsigned char 	*p1;
	unsigned char 	*p2;
	int 			i;

	i = 0;
	p1 = (unsigned char *) ptr1;
	p2 = (unsigned char *) ptr2;

	while ( ( p1[i] == p2[i] ) && ( i < num ) )
		i++;
	return (p1[i] - p2[i]);
}
