/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 10:32:10 by jhansen           #+#    #+#             */
/*   Updated: 2019/06/11 10:41:47 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list list;

	if (!content)
	{
		content = NULL;
		content_size = 0;
	}
	list.content = content;
	list.content_size = content_size;
	list.next = NULL;
	return (list);
}
