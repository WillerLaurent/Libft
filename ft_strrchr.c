/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwiller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 05:41:51 by lwiller           #+#    #+#             */
/*   Updated: 2020/12/02 01:53:27 by lwiller          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int len;

	len = (ft_strlen(str) - 1);
	if ((char)c == '\0')
		return ((char *)str + len + 1);
	while (len >= 0 && str[len])
	{
		if (str[len] == (unsigned char)c)
			return ((char *)str + (len));
		len--;
	}
	return (NULL);
}
