/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 15:01:16 by jhansen           #+#    #+#             */
/*   Updated: 2019/05/30 17:01:54 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*string;

	i = 0;
	string = (char *)malloc(sizeof(char) * ft_strlen(s));
	while (s[i] != '\0')
	{
		string[i] = f(s[i]);
		i++;
	}
	return (string);
}
