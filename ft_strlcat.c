/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gubranco <gubranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:11:54 by gubranco          #+#    #+#             */
/*   Updated: 2022/11/04 18:19:52 by gubranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	j = ft_strlen(dst);
	i = 0;
	if (dstsize < j)
		return (dstsize + ft_strlen(src));
	while (src[i] && (i < dstsize - j - 1))
	{
		dst[j + i] = src[i];
		i++;
	}
	if (i < dstsize)
		dst[j + i] = '\0';
	return (i + j);
}

/* The function concatenates the string pointed by source (including the null 
character), to the destination. The function takes the full size
of the destination buffer and guarantee NUL-termination if there is room.  
Note that room for the NUL should be included in dstsize.
It appends string src to the end of dst.  It will append at	most 
dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless
dstsize is 0 or the original dst string was longer than dstsize. It returns 
the total length of the string it tried to create, which means the initial 
length of dst plus the length of src */