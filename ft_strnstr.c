/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vokrut <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 20:17:55 by vokrut            #+#    #+#             */
/*   Updated: 2019/02/23 13:26:22 by vokrut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *dst, const char *src, size_t len)
{
	size_t	i;
	size_t	j;
	char	*p_dst;
	char	*p_src;

	i = 0;
	j = 0;
	p_dst = (char *)dst;
	p_src = (char *)src;
	while ((i < len) && *(p_dst + i))
	{
		while (*(p_src + j) && *(p_src + j) == *(p_dst + i + j) &&
				((i + j) < len))
			j++;
		if (!(*(p_src + j)))
			return ((char *)&p_dst[i]);
		j = 0;
		i++;
	}
	if (!p_src[0])
		return ((char *)&p_dst[i]);
	return (NULL);
}
