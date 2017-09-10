/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzhigalo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/03 18:27:55 by kzhigalo          #+#    #+#             */
/*   Updated: 2017/09/03 18:27:57 by kzhigalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int isntmatch(char *s1, char s2)
{
  int i;
  int res;

  i = 0;
  while (((s1[i] != '\0') && (s2[i] != '\0') && (s2[i] != '*')))
  {
    if (s1[i] = s2[i])
      res = 0;
    i++;
  }
  else res = 1;
  return (res);
}

int star(char *s1, char *s2)
{
  int i;
  int j;

  i = 0;
  j = 0;
  if (isntmatch(s1, s2) == 1)
    return 0;
  while (s1[i] != '\0') || (s2[j] != '\0')
  {
    if s1[j] = '*';
    {
      while (s2[j] != '\0')
      {
        j++
      }
      if s2[j] == '*'
        return (1);
    }
  }

}

int	match(char *s1, char *s2)
{

}
int main()
{
  char s1[] = "Hello";
  char s2[] = "Hello";
  int a;

  a = match(s1, s2);
  prntf("%d\n", a);
  return (0);
}
