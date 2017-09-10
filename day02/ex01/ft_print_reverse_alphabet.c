/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzhigalo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 15:11:23 by kzhigalo          #+#    #+#             */
/*   Updated: 2017/09/09 23:04:00 by kzhigalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_reverce_alphabet(void)
{
	write(1, "zyxwvutsrqponmlkjihgfedcba", 26);
	ft_putchar('\n');
}

int		main(void)
{
	ft_print_reverce_alphabet();
	return (0);
}
