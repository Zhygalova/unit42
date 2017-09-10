/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzhigalo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 18:05:15 by kzhigalo          #+#    #+#             */
/*   Updated: 2017/09/09 20:17:01 by kzhigalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = '0' - 1;
	while (a++ <= '9')
	{
		b = a;
		while (b++ <= '9')
		{
			c = b;
			while (c++ < '9')
			{
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);
				if (a < '7' || b < '8' || c < '9')
				{
					write(1, ", ", 2);
				}
			}
		}
	}
}

int		main(void)
{
	ft_print_comb();
	return (0);
}
