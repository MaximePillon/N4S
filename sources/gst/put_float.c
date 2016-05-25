/*
** put_float.c for CPE_2015_n4s in /home/pillon_m/CPE/CPE_2015_n4s/sources/gst/put_float.c
**
** Made by Maxime Pillon
** Login   <maxime.pillon@epitech.eu>
**
** Started on  Mon May 09 09:10:21 2016 Maxime Pillon
** Last update Mon May 09 09:10:21 2016 Maxime Pillon
*/

#include	<unistd.h>
#include	"../../includes/n4s.h"
#include	"define.h"

void		put_float(float nb, int dec)
{
  int		i;
  char		c;

  if (nb < 0)
  {
    write(1, "-", 1);
    nb = -nb;
  }
  putnbr((int)nb);
  i = 0;
  write(1, ".", 1);
  while (i < dec)
  {
    nb *= 10;
    c = (int)nb % 10 + '0';
    write(1, &c, 1);
    ++i;
  }
}