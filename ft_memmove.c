/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vokrut <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 08:49:38 by vokrut            #+#    #+#             */
/*   Updated: 2019/02/21 18:05:18 by vokrut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*p_src;
	char		*p_dst;

	p_src = src;
	p_dst = dst;
	if (p_src <= p_dst)
	{
		while (len--)
			*(p_dst + len) = *(p_src + len);
	}
	else if (p_src > p_dst)
	{
		while (len--)
			*p_dst++ = *p_src++;
	}
	return (dst);
}
