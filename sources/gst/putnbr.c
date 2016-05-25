/*
** putnbr.c for CPE_2015_n4s in /home/pillon_m/CPE/CPE_2015_n4s/sources/gst/putnbr.c
**
** Made by Maxime Pillon
** Login   <maxime.pillon@epitech.eu>
**
** Started on  Mon May 09 09:17:14 2016 Maxime Pillon
** Last update Mon May 09 09:17:14 2016 Maxime Pillon
*/

#include	<unistd.h>
#include	"../../includes/define.h"

void		putnbr(int nb)
{
  char		caracter;
  int		i;

  if (nb < 0)
  {
    write(1, "-", 1);
    nb = -nb;
  }
  i = 0;
  while (nb != 0)
  {
    caracter = nb % 10 + 48;
    nb /= 10;
    write (1, &caracter, 1);
    ++i;
  }
  if (i == 0)
  {
    write(1, "0", 1);
  }
}
