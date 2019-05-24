/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 11:34:58 by jhansen           #+#    #+#             */
/*   Updated: 2019/05/23 13:07:22 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int j;
	int found;
	int len;

	j  = 0;
	found = 0;
	len = ft_strlen(s);
	while (j <= len)
	{
		s++;
		j++;
	}
	j = 0;
	while (j <= len)
	{
		if (*s == c)
		{
			found = 1;
			break;
		}
		else
		{
			s--;
		}
		j++;
	}
	if (found == 0)
		return (NULL);
	else
		return ((char *)s);
}
