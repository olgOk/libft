/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vokrut <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 20:07:54 by vokrut            #+#    #+#             */
/*   Updated: 2019/02/22 18:49:22 by vokrut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_words_count(char const *str, char c)
{
	int				count;

	count = 0;
	while (*str)
	{
		if (*str != c && (*(str + 1) == c || *(str + 1) == '\0'))
			count++;
		str++;
	}
	return (count);
}

static int			ft_strlength(char const *str, char c)
{
	int				len;

	if (!str || !c)
		return (0);
	len = 0;
	while (str[len] && str[len] != c)
		len++;
	return (len);
}

char				**ft_strsplit(char const *s, char c)
{
	char			**p_new;
	unsigned int	i;
	unsigned int	k;
	unsigned int	words_count;

	if (!s || !c)
		return (NULL);
	words_count = ft_words_count(s, c);
	p_new = (char **)malloc(sizeof(char *) * (words_count + 1));
	if (!p_new)
		return (NULL);
	i = 0;
	while (i < words_count)
	{
		while (*s && *s == c)
			s++;
		p_new[i] = (char *)malloc(sizeof(char) * (ft_strlength(s, c) + 1));
		k = 0;
		while (*s && *s != c)
			p_new[i][k++] = *s++;
		p_new[i][k] = '\0';
		i++;
	}
	p_new[i] = 0;
	return (p_new);
}
