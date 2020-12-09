/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwiller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 05:38:39 by lwiller           #+#    #+#             */
/*   Updated: 2020/12/07 09:57:56 by lwiller          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t buff_size)
{
	size_t	i;
	size_t	j;
	size_t	src_size;
	size_t	dst_size;

	i = 0;
	j = 0;
	src_size = ft_strlen(src);
	dst_size = ft_strlen(dst);
	if (buff_size == 0)
		return (src_size);
	if (buff_size < dst_size)
		return (buff_size + src_size);
	while (dst[i] && i < buff_size)
		i++;
	while (src[j] && i < (buff_size - 1))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst_size + src_size);
}
