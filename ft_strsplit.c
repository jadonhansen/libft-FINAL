/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 12:44:09 by jhansen           #+#    #+#             */
/*   Updated: 2019/06/10 14:03:01 by jhansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		word_count(char const *s, char c, int index)
{
	int i;

	i = 0;
	if (!(s[index]))
		return (0);
	while (s[index] == c)
		index++;
	while (s[index] != '\0' && s[index] != c)
	{
		index++;
		i = 1;
	}
	return (i + word_count(s, c, index));
}

static int		word_len(char const *s, char c, int index)
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

static char		**populatearray(int count, char c, char const *s, char **array)
{
	int i;
	int k;
	int j;

	i = 0;
	j = 0;
	while (j < count)
	{
		k = 0;
		if (!(array[j] = ft_strnew(word_len(s, c, i))))
			return (NULL);
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i] != '\0')
			array[j][k++] = s[i++];
		array[j++][k] = '\0';
	}
	array[j] = 0;
	return (array);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**array;
	int		count;

	if (s == NULL || c == (char)NULL)
		return (NULL);
	count = word_count(s, c, 0);
	array = (char **)malloc(sizeof(char *) * count + 1);
	if (array == NULL)
		return (NULL);
	populatearray(count, c, s, array);
	return (array);
}
