/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwiller <lwiller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 05:35:43 by lwiller           #+#    #+#             */
/*   Updated: 2020/12/09 08:44:47 by lwiller          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_memory(char **array)
{
	int i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}

static char	*make_str(const char *str, int count, char c, char **array)
{
	int		i;
	int		j;
	char	*rtn;

	i = count;
	j = 0;
	while ((str[i] != c) && str[i])
		i++;
	if (!(rtn = malloc((i - count + 1) * sizeof(char))))
	{
		free_memory(array);
		return (NULL);
	}
	i = count;
	while ((str[i] != c) && str[i])
	{
		rtn[j] = str[i];
		j++;
		i++;
	}
	rtn[j] = 0;
	return (rtn);
}

static int	count_words(const char *str, char c)
{
	int i;
	int nb;

	i = 0;
	nb = 0;
	while (str[i])
	{
		while ((str[i] == c) && str[i])
			i++;
		if (str[i] != c && str[i])
			nb++;
		while ((str[i] != c) && str[i])
			i++;
	}
	return (nb);
}

char		**ft_split(const char *str, char c)
{
	int		i;
	int		nb;
	char	**array;

	if (!str)
		return (NULL);
	i = 0;
	nb = count_words(str, c);
	if (!(array = (char**)ft_calloc((nb + 1), sizeof(char*))))
		return (NULL);
	i = 0;
	nb = 0;
	while (str[i])
	{
		while ((str[i] == c) && str[i])
			i++;
		if (str[i] != c && str[i])
		{
			array[nb] = make_str(str, i, c, array);
			nb++;
		}
		while ((str[i] != c) && str[i])
			i++;
	}
	return (array);
}
