/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylagzoul <ylagzoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 22:29:40 by ylagzoul          #+#    #+#             */
/*   Updated: 2024/11/22 19:35:53 by ylagzoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len_s1;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	len_s1 = ft_strlen(s1);
	while (s1[i] && check_set(s1[i], set))
		i++;
	while (len_s1 > i && check_set(s1[len_s1 - 1], set))
		len_s1--;
	return (ft_substr(s1, i, len_s1 - i));
}
