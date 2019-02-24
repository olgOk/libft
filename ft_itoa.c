/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vokrut <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 15:24:39 by vokrut            #+#    #+#             */
/*   Updated: 2019/02/20 21:50:57 by vokrut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char			*num;
	int				size;
	unsigned int	n1;

	size = (n <= 0) ? 1 : 0;
	n1 = (n < 0) ? (-1 * n) : n;
	while (n1)
	{
		n1 /= 10;
		size++;
	}
	num = (char *)malloc(sizeof(char) * (size + 1));
	if (!num)
		return (NULL);
	n1 = (n < 0) ? (-1 * n) : n;
	num[size] = '\0';
	while (size)
	{
		num[--size] = n1 % 10 + '0';
		n1 /= 10;
	}
	if (n < 0)
		num[size] = '-';
	return (num);
}
