/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_comb2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzhigalo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 22:04:11 by kzhigalo          #+#    #+#             */
/*   Updated: 2017/09/09 23:02:26 by kzhigalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = -1;
	while (++a < 100)
	{
		if (a == b)
			continue;
		ft_putchar('0' + ((a - a % 10) / 10));
		ft_putchar('0' + (a % 10));
		ft_putchar(' ');
		ft_putchar('0' + ((b - b % 10) / 10));
		ft_putchar('0' + (b % 10));
		if (a != 98 || b != 99)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}
