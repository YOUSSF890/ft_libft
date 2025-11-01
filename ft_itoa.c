/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylagzoul <ylagzoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:44:51 by ylagzoul          #+#    #+#             */
/*   Updated: 2024/11/20 21:46:04 by ylagzoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_of_number(int n)
{
	int	count;

	if (n == 0)
		return (1);
	count = 0;
	if (n < 0)
		count++;
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int				len_n;
	char			*res;
	unsigned int	nbr;

	len_n = len_of_number(n);
	res = (char *)malloc(sizeof(char) * (len_n + 1));
	if (!res)
		return (NULL);
	res[len_n] = '\0';
	if (n < 0)
	{
		res[0] = '-';
		nbr = -n;
	}
	else
		nbr = n;
	while (len_n-- > 0 && nbr != 0)
	{
		res[len_n] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (n == 0)
		res[0] = '0';
	return (res);
}
