/*
** my_get_float.c for CPE_2015_n4s in /home/pillon_m/CPE/CPE_2015_n4s/sources/gst/my_get_float.c
**
** Made by Maxime Pillon
** Login   <maxime.pillon@epitech.eu>
**
** Started on  Thu May 05 14:16:29 2016 Maxime Pillon
** Last update Thu May  5 16:39:10 2016 Pillon maxime
*/

#include	"../../includes/n4s.h"

float		float_extend(float nb, char *str, int cpt1, float dec)
{
  int		cpt;

  cpt = 1;
  while (--cpt1 != 0)
    cpt *= 10;
  dec =/ cpt;
  nb += dec;
  return (nb);
}

float		my_get_float(const char *str)
{
  float		nb;
  float		dec;
  int		cpt;
  int		cpt1;

  nb = 0;
  dec = 0;
  cpt1 = 1;
  (str[0] == '-' || str[0] == '+') ? (cpt = 0) : (cpt = -1);
  while (str[++cpt] && ((str[cpt] >= '0' && str[cpt] <= '9') || str[cpt] == '.'))
    if (str[cpt] == '.')
      while (str[cpt])
	{
	  dec *= 10;
	  dec = dec + (str[cpt] - 48);
	  cpt++;
	  cpt1++;
	}
    else
      nb = (nb * 10) + (str[cpt] - 48);
  if (!str[cpt])
    return (-1);
  return (float_extend(nb, str, cpt1, dec));
}
