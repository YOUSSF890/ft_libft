/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylagzoul <ylagzoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 21:37:14 by ylagzoul          #+#    #+#             */
/*   Updated: 2024/11/20 22:19:44 by ylagzoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	copy;
	size_t	len_src;

	len_src = ft_strlen(src);
	if (dstsize > 0)
	{
		if (dstsize > len_src)
			copy = len_src;
		else
			copy = dstsize - 1;
		ft_memcpy(dst, src, copy);
		dst[copy] = '\0';
	}
	return (len_src);
}
