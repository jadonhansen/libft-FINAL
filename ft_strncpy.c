/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:02:42 by jhansen           #+#    #+#             */
/*   Updated: 2019/05/22 15:51:46 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char *temp;

	temp = dst;
	while (len)
	{
		while (ft_strlen(src) < len)
		{
			*dst = *src;
			src++;
			dst++;
		}
		*dst = 0;
		dst++;
		len--;
	}
	return (temp);
}
