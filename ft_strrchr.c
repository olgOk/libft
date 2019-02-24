/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vokrut <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 11:13:57 by vokrut            #+#    #+#             */
/*   Updated: 2019/02/21 21:43:45 by vokrut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*p_str;
	size_t			i;

	p_str = (char *)s;
	i = ft_strlen(p_str);
	while (i && p_str[i] != c)
		i--;
	if (p_str[i] == c)
		return ((char *)&p_str[i]);
	return (NULL);
}
