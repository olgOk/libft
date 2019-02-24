/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vokrut <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 20:13:15 by vokrut            #+#    #+#             */
/*   Updated: 2019/02/22 18:29:24 by vokrut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	const char	*tmp_str;
	const char	*tmp_tofind;

	if (*str == *to_find && !*str)
		return ((char *)str);
	while (*str)
	{
		tmp_str = str;
		tmp_tofind = to_find;
		while (*tmp_tofind && *tmp_str && *str == *tmp_tofind)
		{
			str++;
			tmp_tofind++;
		}
		if (!*tmp_tofind)
			return ((char *)tmp_str);
		str = tmp_str + 1;
	}
	return (NULL);
}
