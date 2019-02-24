/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vokrut <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 16:17:28 by vokrut            #+#    #+#             */
/*   Updated: 2019/02/15 17:14:22 by vokrut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*p_str;
	size_t	i;

	p_str = (char *)s;
	i = 0;
	while (i < n)
	{
		if (*p_str == (char)c)
			return ((void *)p_str);
		p_str++;
		i++;
	}
	return (NULL);
}
