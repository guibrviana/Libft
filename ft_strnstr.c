/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gubranco <gubranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 19:01:41 by gubranco          #+#    #+#             */
/*   Updated: 2022/11/04 18:22:03 by gubranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *dst, const char *src, size_t len)
{
	if (src == '\0')
		return (dst);
	return (0);
}

REVER

/* The function locates the first occurrence of the null-terminated string 
src in the string dst, where not more than len characters are searched. 
Characters that appear after a `\0' character are not searched.  If src 
is an empty string, dst is returned; if src occurs nowhere in dst, NULL is
returned; otherwise a pointer to the first character of the first 
occurrence of src is returned. */