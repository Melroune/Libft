/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vatourni <vatourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:51:10 by vatourni          #+#    #+#             */
/*   Updated: 2014/11/05 19:12:05 by vatourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *s1, const char *s2)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (s1[i] != '\0')
	{
		if (s2[k] == '\0')
			return ((char *)s1 + i - k);
		if (s2[k] == s1[i])
			k++;
		else
			k = 0;
		i++;
	}
	if (s2[k] == '\0')
		return ((char *)s1 + i - k);
	return (NULL);
}
