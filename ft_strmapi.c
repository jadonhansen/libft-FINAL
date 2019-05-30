/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 15:58:46 by jhansen           #+#    #+#             */
/*   Updated: 2019/05/30 16:16:28 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*string;

	i = 0;
	string = (char *)malloc(sizeof(char) * ft_strlen(s));
	while (s[i] != '\0')
	{
		string[i] = f(i, s[i]);
		i++;
	}
	return (string);
}
