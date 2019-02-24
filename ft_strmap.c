/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vokrut <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 19:37:49 by vokrut            #+#    #+#             */
/*   Updated: 2019/02/21 21:45:29 by vokrut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	i;
	char			*str_new;

	if (!s || !f)
		return (NULL);
	str_new = ft_strnew(ft_strlen(s));
	if (!str_new)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str_new[i] = (*f)(s[i]);
		i++;
	}
	return (str_new);
}
