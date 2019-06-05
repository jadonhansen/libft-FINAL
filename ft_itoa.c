/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 15:50:46 by jhansen           #+#    #+#             */
/*   Updated: 2019/06/05 14:37:41 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		getlen(int num)
{
	int count;

	count = 0;
	if (num < 0)
		num *= -1;
	while (num >= 10)
	{
		num = num / 10;
		count++;
	}
	if (num > 0)
		count++;
	return (count);
}

static char		*negcase(int num, int count)
{
	char	*str;
	int		i;
	int		rem;

	i = 0;
	rem = 0;
	num *= -1;
	if (num == INTMIN)
		return ("-2147483648\0");
	str = (char *)malloc(sizeof(char) * count + 2);
	while (i < count)
	{
		rem = num % 10;
		num = num / 10;
		str[count - i] = rem + '0';
		i++;
	}
	str[count - i] = '-';
	str[count + 1] = '\0';
	return (str);
}

char			*ft_itoa(int n)
{
	int		i;
	int		rem;
	int		count;
	char	*str;

	i = 0;
	rem = 0;
	count = getlen(n);
	if (n == 0)
		return ("0\0");
	if (n < 0)
		str = negcase(n, count);
	else
	{
		str = (char *)malloc(sizeof(char) * count + 1);
		while (i < count)
		{
			rem = n % 10;
			n = n / 10;
			str[count - (i + 1)] = rem + '0';
			i++;
		}
		str[count] = '\0';
	}
	return (str);
}
