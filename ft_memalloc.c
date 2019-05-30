/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 13:42:19 by jhansen           #+#    #+#             */
/*   Updated: 2019/05/29 13:51:30 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char *memory;

	memory = (char *)malloc(sizeof(char) * size);
	ft_bzero(memory, size);
	if (memory == NULL)
		return (NULL);
	return (memory);
}
