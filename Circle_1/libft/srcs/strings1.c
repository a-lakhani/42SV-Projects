/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strings1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhani <alakhani@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/27 18:11:20 by alakhani          #+#    #+#             */
/*   Updated: 2020/07/11 14:15:46 by alakhani         ###   ########.fr       */
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

	srclen = 0;

	if (destlen == 0)
		return (ft_strlen(src));

	while (src[srclen])
	{
		if (srclen < destlen - 1)
			dest[srclen++] = src[srclen];
		else if (srclen == destlen - 1)
			dest[srclen++] = '\0';
		else
			srclen++;
	}

	if (srclen < destlen - 1)
		dest[srclen++] = '\0';

	return (srclen);
}

size_t ft_srlcat(char * dest, const char * src, size_t destlen)
{
	size_t len;
	size_t i;

	len = ft_strlen(dest);

	if (len < destlen - 1)
		return ft_uCeiling(len, 
			ft_strlcpy(dest + len, src, destlen - len), SIZE_MAX);
	else
		return ft_uCeiling(len,	ft_strlen(src), SIZE_MAX);
}
