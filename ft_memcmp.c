/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vokrut <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 17:15:19 by vokrut            #+#    #+#             */
/*   Updated: 2019/02/15 19:37:51 by vokrut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p_str1;
	unsigned char	*p_str2;

	p_str1 = (unsigned char *)s1;
	p_str2 = (unsigned char *)s2;
	while (n)
	{
		if (*p_str1 != *p_str2)
			return (*p_str1 - *p_str2);
		p_str1++;
		p_str2++;
		n--;
	}
	return (0);
}
