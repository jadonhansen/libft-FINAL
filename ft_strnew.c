/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 12:57:20 by jhansen           #+#    #+#             */
/*   Updated: 2019/05/30 13:06:12 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *string;

	string = (char *)malloc(sizeof(char) * size);
	if (string == NULL)
		return (NULL);
	ft_memset(string, '\0', size);
	return (string);
}
