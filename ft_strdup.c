/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vokrut <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 19:02:26 by vokrut            #+#    #+#             */
/*   Updated: 2019/01/17 14:09:37 by vokrut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*str_new;
	size_t	i;

	i = ft_strlen(src);
	str_new = (char*)malloc(sizeof(*src) * (i + 1));
	if (str_new == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		str_new[i] = src[i];
		i++;
	}
	str_new[i] = '\0';
	return (str_new);
}
