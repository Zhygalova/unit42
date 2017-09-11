/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzhigalo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/28 13:31:06 by kzhigalo          #+#    #+#             */
/*   Updated: 2017/08/28 13:31:08 by kzhigalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
 
 #include <unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_atoi(char *str)
{
	int index;
	int i = 1;
	int n;

	while (str[index] != '\n')
	{
		if (str[index] >= 48 || str[index] <= 57)
		{
			n = str[index];
			
			i++;
			index++;
		} 
	}	
}

int main (void)
{
	char str[] = '55765765';

	ft_atoi(str);
	ft_putchar('\n');
	return (0);
}
