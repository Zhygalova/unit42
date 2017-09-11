/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzhigalo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/28 21:32:45 by kzhigalo          #+#    #+#             */
/*   Updated: 2017/08/28 21:33:28 by kzhigalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int index;
	int r;

	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	while (nb / 10 >= 1)
	{
		index = 1;
		r = nb;
		while (r / 10 >= 1)
		{
			index *= 10;
			r /= 10;
		}
		ft_putchar('0' + r);
		nb %= index;
	}
	ft_putchar('0' + nb);
}

int main ()
{
	int nb;

	nb = 666;
	ft_putnbr(nb);
	return (0);
}
