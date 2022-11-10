/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gubranco <gubranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 19:01:41 by gubranco          #+#    #+#             */
/*   Updated: 2022/11/10 19:30:45 by gubranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *dst, const char *src, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	n;

	i = 0;
	j = 0;
	n = ft_strlen(src);
	if (src[i] == '\0')
		return ((char *)dst);
	while (dst[i] != '\0' && i < len)
	{
		j = 0;
		while (dst[i + j] == src[j] && (i + j) < len && src[j] && dst[i + j])
			j++;
		if (j == n)
			return ((char *)&dst[i]);
		i++;
	}
	return (0);
}

/* The function locates the first occurrence of the null-terminated string 
src in the string dst, where not more than len characters are searched. 
Characters that appear after a `\0' character are not searched.  If src 
is an empty string, dst is returned; if src occurs nowhere in dst, NULL is
returned; otherwise a pointer to the first character of the first 
occurrence of src is returned. */