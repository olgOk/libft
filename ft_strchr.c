/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vokrut <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 19:26:50 by vokrut            #+#    #+#             */
/*   Updated: 2019/02/21 21:35:43 by vokrut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*p_str;
	int		i;

	p_str = (char *)s;
	i = 0;
	while (1)
	{
		if (p_str[i] == c)
			return ((char *)&p_str[i]);
		if (p_str[i] == '\0')
			return (NULL);
		i++;
	}
	return (NULL);
}
