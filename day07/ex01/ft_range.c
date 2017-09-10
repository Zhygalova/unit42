/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzhigalo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/03 14:28:10 by kzhigalo          #+#    #+#             */
/*   Updated: 2017/09/03 14:28:13 by kzhigalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
  int i;
  int *arr;

  if (min >= max)
    return (0);
  arr = (int*)malloc(sizeof(*arr) * (max - min));
  i = 0;
  while (min < max)
  {
    arr[i] = min;
    min++;
    i++;
  }
  return (arr);
}

int main ()
{
  int min = 5;
  int max = 15;
  int *arr = ft_range(min, max);
  int index = 0;

  // while (arr[index] < max)
  // {
  //   printf("%d", arr[index]);
  //   printf(" ");
  //   index++;
  // }
  // printf("\n");  
  while (index < (max-min))
  {
    printf("%d", arr[index]);
    index++;
  }
  printf("\n");  
}
