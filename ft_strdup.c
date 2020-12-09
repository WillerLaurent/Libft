/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwiller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 05:37:36 by lwiller           #+#    #+#             */
/*   Updated: 2020/11/30 05:37:45 by lwiller          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*cpy;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(str);
	if (!(cpy = malloc((len + 1) * sizeof(char))))
		return (NULL);
	cpy[len] = 0;
	len--;
	while (str[i])
	{
		cpy[i] = str[i];
		i++;
	}
	return (cpy);
}
