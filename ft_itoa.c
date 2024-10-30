/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamacie <joamacie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:35:19 by joamacie          #+#    #+#             */
/*   Updated: 2024/10/29 17:59:00 by joamacie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	nbr;

	len = ft_nlen(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	nbr = n;
	if (n < 0)
	{
		nbr = -nbr;
		str[0] = '-';
	}
	if (nbr == 0)
		str[0] = '0';
	while (nbr > 0)
	{
		str[len] = '0' + (nbr % 10);
		nbr /= 10;
		len--;
	}
	return (str);
}
