/*
** my_getfloat.c for CPE_2015_n4s in /home/pillon_m/CPE/CPE_2015_n4s/sources/gst/my_getfloat.c
**
** Made by Maxime Pillon
** Login   <maxime.pillon@epitech.eu>
**
** Started on  Tue May 24 09:44:53 2016 Maxime Pillon
** Last update Tue May 24 09:44:53 2016 Maxime Pillon
*/

#include	<stdbool.h>
#include	<stddef.h>

static int	is_num_or_point(char car)
{
  if ((car >= '0' && car <= '9') || car == '.')
    return (0);
  else
    return (1);
}

static int 	get_digit(const char *str,
			    float *nb, bool *point, unsigned int *dec)
{
  if (is_num_or_point(*str))
    return (1);
  if (*str == '.' && *point == false)
    *point = true;
  else if (*str == '.' && *point == true)
    return (1);
  else if (*point == false)
  {
    *nb *= 10;
    *nb += *str - '0';
  }
  else
  {
    *dec += 1;
    *nb += (float)((*str - '0')) / (float)(*dec * 10);
  }
  return (0);
}

float		get_float(const char *str)
{
  unsigned int	cpt;
  bool		point;
  float		nb;
  float		sign;
  unsigned int	dec;

  if (str == NULL)
    return (-2);
  point = false;
  nb = 0;
  dec = 0;
  cpt = 0;
  sign = 1;
  if (*str == '-')
  {
    sign = -1;
    cpt = 1;
  }
  while (str[cpt] != '\0')
  {
    if (get_digit(&(str[cpt]), &nb, &point, &dec))
      return (nb * sign);
    cpt++;
  }
  return (nb * sign);
}
