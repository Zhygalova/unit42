/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzhigalo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 17:57:33 by kzhigalo          #+#    #+#             */
/*   Updated: 2017/09/09 23:03:19 by kzhigalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		ft_putchar('N');
	}
		else ft_putchar('P');
	ft_putchar('\n');
}
