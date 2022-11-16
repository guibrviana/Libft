/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gubranco <gubranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:49:17 by gubranco          #+#    #+#             */
/*   Updated: 2022/11/16 19:20:03 by gubranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sstr;
	size_t	i;

	i = 0;
	sstr = (char *)malloc((len + 1) * sizeof(char));
	if (sstr == NULL)
		return (NULL);
	while (i < len && s[start])
	{
		sstr[i] = s[start];
		start++;
		i++;
	}
	sstr[i] = '\0';
	return (sstr);
}

/* Allocates (with malloc(3)) and returns a substring from the string ’s’.
The substring begins at index ’start’ and is of maximum size ’len’.
It returns the substring, and NULL if the allocation fails. */