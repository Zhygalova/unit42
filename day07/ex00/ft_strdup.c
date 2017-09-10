/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzhigalo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/03 11:13:58 by kzhigalo          #+#    #+#             */
/*   Updated: 2017/09/03 11:14:00 by kzhigalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_putstr(char *str)
{
  int index;

  index = 0;
  while (str[index] != '\0')
    {
      ft_putchar(str[index]);
      index++;
    }
}

char	*ft_strdup(char *src)
{
  int i;
  int len;
  char *str;

  len = 0;
  while (src[len] != '\0')
    {
      len++;
    }
  str = (char*)malloc(sizeof(*str) * (len + 1));
  i = 0;
  while (i < len)
    {
      str[i] = src[i];
      i++;
    }
	return (str);
}

int main(void)
{
  char src[] = "Hello world!";

  ft_putstr(ft_strdup(src));
  ft_putchar('\n');
  return (0);
}
