/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vokrut <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 19:13:48 by vokrut            #+#    #+#             */
/*   Updated: 2019/02/21 19:20:05 by vokrut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *src, size_t dstsize)
{
	char	*p_dst;
	char	*p_src;
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	p_dst = (char *)dst;
	p_src = (char *)src;
	dst_len = ft_strlen(p_dst);
	src_len = ft_strlen(p_src);
	if (dstsize < dst_len)
		src_len += dstsize;
	else
		src_len += dst_len;
	i = 0;
	while (p_src[i] && dst_len + 1 < dstsize)
	{
		p_dst[dst_len] = p_src[i];
		i++;
		dst_len++;
	}
	p_dst[dst_len] = '\0';
	return (src_len);
}
