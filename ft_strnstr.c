/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwiller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 05:41:16 by lwiller           #+#    #+#             */
/*   Updated: 2020/11/30 05:41:32 by lwiller          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *tofind, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (!tofind[i])
		return ((char *)&str[i]);
	while (str[i] && i < len)
	{
		j = 0;
		while (tofind[j] == str[i + j] && tofind[j] && (i + j) < len)
		{
			j++;
			if (!tofind[j])
				return ((char *)&str[i]);
		}
		i++;
	}
	return (NULL);
}
