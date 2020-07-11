/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhani <alakhani@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/12 22:27:29 by alakhani          #+#    #+#             */
/*   Updated: 2020/06/19 20:01:59 by alakhani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>		// printf
#include <stdlib.h>		// atoi
#include <string.h>		// strcmp
#include "libft.h"


typedef void *(*STRINGFUN)(char *dest, const char *src, size_t num);

void ft_strFunTest(STRINGFUN fun, size_t num, char *ft_name)
{
	char dest[] = "Today is June 19th, 2020.";
	const char src[] = "I have finished my coffee for today.";

	printf("String1: %s\n", dest);
	printf("String2: %s\n", src);
	printf("Return value of %s(String1, String2, %zu): %zu\n", ft_name, num,
			(size_t) fun(dest, src, num));
	printf("String1: %s\n", dest);
}

int	main(int argc, char *argv[])
{
	if ( argc > 1)
	{
		if ( !strcmp(argv[1],"ft_memset") && argc == 5)
		{
			int ch = atoi(argv[3]);
			printf("String before memset: \"%s\"\n",argv[2]);
			printf("Int given: %d\nInt cast as unsigned char: %c\n" 
					"Integer result after & 255: %d\n"
					"Int cast back from unsigned char: %d\n",
					ch, (unsigned char) ch, ch & 255, (int) (unsigned char) ch);
			printf("Writing %d times\n",atoi(argv[4]));
			printf("String  after ft_memset: \"%s\"",
			(char *) ft_memset((void *)argv[2],ch,atoi(argv[4])));
		}
		else if ( !strcmp(argv[1],"ft_memset") && argc != 5)
			printf("Incorrect number of arguments given for ft_memset.\n");
		else
			printf("I don't know that function yet.\n");
	}
	else
		printf("What did you want me to do?\n");
	return (0);
}
