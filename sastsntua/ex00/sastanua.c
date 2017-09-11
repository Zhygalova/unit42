/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastanua.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzhigalo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 13:10:36 by kzhigalo          #+#    #+#             */
/*   Updated: 2017/08/27 13:10:38 by kzhigalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int widthStorey_i(int i)
{
	if(i == 0)
		return(7);
	return(widthStorey_i(i - 1) + 2 * (1 + (3 + i) + ((i % 2) + (i / 2))));
}

void	storey(int height, int width)
{
	int i;
	int j;

	i = 0;
	while(i < height)
	{
		j = 0;
		while(j < width)
		{
			write(1, ".", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	sastanua(int size)
{
	int i;
	int height;
	int width;

	i = 0;
	width = 3;
	while(i < size)
	{
		height = 3 + i;
		width = widthStorey_i(i);
		storey(height, width);
		i++;
	}
}

int	main()
{
	sastanua(2);

	return (0);
}