/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 12:44:09 by jhansen           #+#    #+#             */
/*   Updated: 2019/06/04 14:13:32 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*f_strtrim(char const *s, char c)
{
	int		stop;
	int		i;
	size_t	j;
	char	*string;

	j = 0;
	i = 0;
	string = (char *)malloc(sizeof(char) * strlen(s) + 1);
	if (string == NULL)
		return (NULL);
	while (s[i])
		i++;
	while (s[i - 1] == c)
		i--;
	stop = i - 1;
	i = 0;
	while (s[i] == c)
		i++;
	while (i <= stop && j < strlen(s))
	{
		string[j] = s[i];
		j++;
		i++;
	}
	string[j] = '\0';
	return (string);
}

int		f_count(char const *s, char c)
{
	int			i;
	int			count;
	const char	*string;

	i = 0;
	count = 1;
	string = f_strtrim(s, c);
	if (string[i] == c)
		i++;
	while (string[i] != '\0')
	{
		if (string[i] == c)
		{
			while (string[i] == c)
			{
				i++;
			}
			count++;
		}
		i++;
	}
	return (count);
}

static int	word_len(char const *s, char c, int index)
{
	int i;

	i = 0;
	while (s[index] == c)
		index++;
	while (s[index] != c && s[index] != '\0')
	{
		i++;
		index++;
	}
	return (i);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**array;
	int		count;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	count = f_count(s, c);
	array = (char **)malloc(sizeof(char *) * count + 1);
	if (array == NULL)
		return (NULL);
	while (j < count)
	{
		k = 0;
		if (!(array[j] = ft_strnew(word_len(s, c, i))))
			return (NULL);
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i] != '\0')
		{
			array[j][k] = s[i];
			k++;
			i++;
		}
		array[j][k] = '\0';
		j++;
	}
	array[j] = 0;
	return (array);
}
