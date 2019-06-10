/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 15:50:46 by jhansen           #+#    #+#             */
/*   Updated: 2019/06/10 14:02:39 by jhansen          ###   ########.fr       */
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
	{
		str = ft_strdup("-2147483648");
		return (str);
	}
	str = (char *)malloc(sizeof(char) * count + 2);
	if (str == NULL)
		return (NULL);
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

static char		*poscase(int num, int count)
{
	int		i;
	int		rem;
	char	*str;

	i = 0;
	rem = 0;
	if (!(str = ft_strnew(count + 1)))
		return (NULL);
	while (i < count)
	{
		rem = num % 10;
		num = num / 10;
		str[count - (i + 1)] = rem + '0';
		i++;
	}
	str[count] = '\0';
	return (str);
}

char			*ft_itoa(int n)
{
	int		count;
	char	*str;

	count = getlen(n);
	if (n == 0)
	{
		str = ft_strnew(1);
		str[0] = '0';
		return (str);
	}
	if (n < 0)
		str = negcase(n, count);
	else
		str = poscase(n, count);
	return (str);
}
