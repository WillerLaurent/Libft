/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwiller <lwiller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 11:36:46 by lwiller           #+#    #+#             */
/*   Updated: 2020/12/09 07:57:44 by lwiller          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *lst;

	if (!alst || !new)
		return ;
	lst = *alst;
	if (!*alst)
		*alst = new;
	else
	{
		lst = ft_lstlast(*alst);
		lst->next = new;
	}
}
