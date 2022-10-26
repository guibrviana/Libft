/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gubranco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 19:30:38 by gubranco          #+#    #+#             */
/*   Updated: 2022/10/26 21:20:04 by gubranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

/*int	main(void)
{
	char c = 'a';
	printf("%d", ft_isalpha(c));
	return (0);
}
*/

/* The isalpha() function checks whether a character is an 
alphabet (a to z and A-Z) or not. If a character passed to 
isalpha() is an alphabet, it returns a non-zero integer, if 
not it returns 0. */