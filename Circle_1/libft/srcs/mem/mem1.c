/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhani <alakhani@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/27 18:12:19 by alakhani          #+#    #+#             */
/*   Updated: 2020/06/15 09:36:21 by alakhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memset(void *buffer, int ch, size_t num)
{
	unsigned char *c;

	c = buffer;

	while ( num-- )
		*c++ = ch;
	return buffer;
}
