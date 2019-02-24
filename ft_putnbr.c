/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vokrut <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 09:21:26 by vokrut            #+#    #+#             */
/*   Updated: 2019/02/14 20:38:25 by vokrut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	int				i;
	unsigned int	nb1;
	char			temp[10];

	nb1 = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		nb1 = -1 * nb1;
	}
	else if (nb == 0)
		ft_putchar('0');
	else
		nb1 = nb;
	i = 0;
	while (nb1 != 0)
	{
		temp[i] = '0' + nb1 % 10;
		nb1 = nb1 / 10;
		i++;
	}
	while (i--)
	{
		ft_putchar(temp[i]);
	}
}
