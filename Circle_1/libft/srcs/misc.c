/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   misc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhani <alakhani@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 21:55:10 by alakhani          #+#    #+#             */
/*   Updated: 2020/06/19 22:33:01 by alakhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_uCeiling(size_t add1, size_t add2, size_t max)
{
	if (add1 >= max || add2 >= max || max - add1 <= add2)
		return max;
	else
		return add1 + add2;
}

size_t ft_uFloor(size_t sub1, size_t sub2, size_t floor)
{
	if (floor >= sub1 || sub1 - floor <= sub2)
		return floor;
	else
		return sub1 - sub2;
}
