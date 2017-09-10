/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzhigalo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 17:40:12 by kzhigalo          #+#    #+#             */
/*   Updated: 2017/09/09 19:55:53 by kzhigalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		ft_putchar('N');
	}
		else ft_putchar('P');
	ft_putchar('\n');
}

int		main(void)
{
	int n;

	n = -1;
	ft_is_negative(n);
	return (0);
}
