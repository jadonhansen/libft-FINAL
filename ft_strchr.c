/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 11:08:19 by jhansen           #+#    #+#             */
/*   Updated: 2019/05/23 11:33:43 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;
	int j;
	int found;

	found = 0;
	j = 0;
	i = ft_strlen(s) + 1;
	while (j <= i)
	{
		if (*s == c)
		{
			found = 1;
			break;
		}
		else
			s++;
		j++;
	}
	if (found == 0)
		return (NULL);
	else
		return ((char *)s);
}
