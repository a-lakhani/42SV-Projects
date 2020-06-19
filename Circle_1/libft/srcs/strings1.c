/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strings1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhani <alakhani@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/27 18:11:20 by alakhani          #+#    #+#             */
/*   Updated: 2020/06/18 23:38:38 by alakhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

size_t ft_strlcpy(char * dest, const char * src, size_t destlen)
{
	size_t srclen;

	if (destlen == 0)
		return (ft_strlen(src));
	else
		srclen = 0;

	while (src[srclen])
	{
		if (srclen < destlen - 1)
			dest[srclen] = src[srclen++];
		else if (srclen == destlen - 1)
			dest[srclen++] = '\0';
		else
			srclen++;
	}

	if (srclen < destlen - 1)
		dest[srclen] = '\0';

	return (srclen);
}
