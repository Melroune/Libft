/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vatourni <vatourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 17:54:46 by vatourni          #+#    #+#             */
/*   Updated: 2014/11/07 11:55:15 by vatourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;

	while ((*alst)->next != NULL && del && *alst)
	{
		tmp = (*alst)->next;
		ft_lstdelone(alst, del);
		free(*alst);
		*alst = tmp;
	}
	*alst = NULL;
}
