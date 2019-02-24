/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vokrut <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 22:02:05 by vokrut            #+#    #+#             */
/*   Updated: 2019/02/21 21:30:19 by vokrut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	int				i;
	unsigned int	nb1;
	char			temp[10];

	nb1 = nb;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb1 = -1 * nb1;
	}
	else if (nb == 0)
		ft_putchar_fd('0', fd);
	else
		nb1 = nb;
	i = 0;
	while (nb1 != 0)
	{
		temp[i] = '0' + nb1 % 10;
		nb1 /= 10;
		i++;
	}
	while (i--)
	{
		ft_putchar_fd(temp[i], fd);
	}
}
