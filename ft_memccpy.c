/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vokrut <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 19:45:21 by vokrut            #+#    #+#             */
/*   Updated: 2019/02/21 21:38:26 by vokrut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c,
		size_t n)
{
	char	*p_src;
	char	*p_dst;
	size_t	i;

	i = 0;
	p_src = (char *)src;
	p_dst = (char *)dst;
	while (i < n)
	{
		*p_dst++ = *p_src++;
		if (*((unsigned char *)src + i) == (unsigned char)c)
			return (p_dst);
		i++;
	}
	return (NULL);
}
