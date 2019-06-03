/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 09:48:30 by jhansen           #+#    #+#             */
/*   Updated: 2019/06/03 11:35:23 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		stop;
	int		i;
	size_t	j;
	char	*string;

	j = 0;
	i = 0;
	string = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (string == NULL)
		return (NULL);
	while (s[i] != '\0')
		i++;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t' || s[i] == ',' || s[i] == '\0')
		i--;
	stop = i;
	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t' || s[i] == ',')
		i++;
	while (i <= stop && j < ft_strlen(s))
	{
		string[j] = s[i];
		j++;
		i++;
	}
	string[j] = '\0';
	return (string);
}
