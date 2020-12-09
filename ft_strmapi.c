/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwiller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 05:40:19 by lwiller           #+#    #+#             */
/*   Updated: 2020/11/30 05:40:26 by lwiller          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *str, char (*f)(unsigned int, char))
{
	char	*rtn;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(str);
	if (!(rtn = malloc((len + 1) * sizeof(char))))
		return (NULL);
	while (i < len)
	{
		rtn[i] = f((unsigned int)i, str[i]);
		i++;
	}
	rtn[i] = 0;
	return (rtn);
}
