/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwiller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 05:43:29 by lwiller           #+#    #+#             */
/*   Updated: 2020/12/01 22:47:54 by lwiller          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *str, unsigned int start, size_t len)
{
	char			*sub_str;
	unsigned int	len_str;
	size_t			i;

	if (str == NULL)
		return (NULL);
	i = 0;
	len_str = ft_strlen(str);
	if (start >= len_str)
		return (ft_strdup(""));
	if (len > (len_str - start))
		len = len_str - start;
	if (!(sub_str = malloc((len + 1) * sizeof(char))))
		return (NULL);
	while (i < len && str[i + start])
	{
		sub_str[i] = str[i + start];
		i++;
	}
	sub_str[i] = 0;
	return (sub_str);
}
