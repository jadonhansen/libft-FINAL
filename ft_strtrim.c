/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 09:48:30 by jhansen           #+#    #+#             */
/*   Updated: 2019/06/10 13:07:08 by jhansen          ###   ########.fr       */
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
	if (s == NULL)
		return (NULL);
	i = ft_strlen(s);
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t' || s[i] == ','
			|| s[i] == '\0'))
		i--;
	stop = i;
	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t' || s[i] == ',')
		i++;
	if (stop < i)
		return ("");
	if (!(string = ft_strnew(stop - i + 1)))
		return (NULL);
	while (i <= stop && j < ft_strlen(s))
		string[j++] = s[i++];
	string[j] = '\0';
	return (string);
}
