/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzhigalo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 20:07:48 by kzhigalo          #+#    #+#             */
/*   Updated: 2017/09/09 22:40:51 by kzhigalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int a;
	int b;
	
	a = -1;
	while (++a < 100)
	{
		b = -1 + a + 1;
		while (++b < 100)
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
}

int		main(void)
{
	ft_print_comb2();
	return (0);
}
