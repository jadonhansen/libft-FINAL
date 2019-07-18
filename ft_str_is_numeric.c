/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 17:01:55 by jhansen           #+#    #+#             */
/*   Updated: 2019/07/18 17:03:59 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**0 is a fail. 1 is a pass
*/

int		ft_str_is_numeric(const char *str)
{
	while ((ft_isdigit(*str) || *str == '-') && *str)
		str++;
	if (*str)
		return (0);
	return (1);
}
