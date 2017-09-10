/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzhigalo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 21:13:06 by kzhigalo          #+#    #+#             */
/*   Updated: 2017/09/09 23:04:18 by kzhigalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

void	ft_print_alphabet(void)
{
	int a;

	a = 'a';
	while (a <= 'z')
	{
		ft_putchar(a);
		a++;
	}
	ft_putchar('\n');
}
