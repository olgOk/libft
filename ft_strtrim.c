/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vokrut <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 14:12:07 by vokrut            #+#    #+#             */
/*   Updated: 2019/02/20 23:07:19 by vokrut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	const char	*new_str;

	if (!s)
		return (NULL);
	while (*s == '\t' || *s == '\n' || *s == ' ')
		s++;
	if (!*s)
		return (ft_strnew(0));
	new_str = s + ft_strlen(s) - 1;
	while (*new_str == '\t' || *new_str == '\n' || *new_str == ' ')
		new_str--;
	return (ft_strsub(s, 0, new_str - s + 1));
}
