/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vokrut <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 18:05:51 by vokrut            #+#    #+#             */
/*   Updated: 2019/02/21 21:27:47 by vokrut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
	size_t	i;
	char	*p_src;
	char	*p_dest;

	i = 0;
	p_src = (char *)src;
	p_dest = (char *)dest;
	while (i++ < n)
		*p_dest++ = *p_src++;
	return (dest);
}
